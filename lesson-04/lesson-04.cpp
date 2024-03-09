#include <crtdbg.h>
#include <iostream>

class Student
{
private:
    std::string firstName; // Имя
    std::string lastName; // Фамилия
    std::string indInsAccNumber; // СНИЛС
    unsigned short yearOfBirth; // Год рождения
    float avgGrade;
public:
    Student();
    Student(
        std::string firstname,
        std::string lastname,
        std::string indinsaccnumber,
        unsigned short yearofbirth,
        float avggrade);
    ~Student();

    std::string getFullName();
    std::string getIndInsAccNumber();
    unsigned short getYearOfBirth();
    float getAvgGrade();
};

Student::Student()
{
    firstName = "";
    lastName = "";
    indInsAccNumber = "000-000-000 00";
    yearOfBirth = 1900;
    avgGrade = 0.0;

    std::cout << "Student (default constructor)" << std::endl;
}

Student::Student(std::string firstname,
    std::string lastname,
    std::string indinsaccnumber,
    unsigned short yearofbirth,
    float avggrade)
{
    firstName = firstname;
    lastName = lastname;
    indInsAccNumber = indinsaccnumber;
    yearOfBirth = yearofbirth;
    avgGrade = avggrade;

    std::cout << "Student (parameterized constructor)" << std::endl;
}

std::string Student::getFullName()
{
    return lastName + " " + firstName;
}

std::string Student::getIndInsAccNumber()
{
    return indInsAccNumber;
}
unsigned short Student::getYearOfBirth()
{
    return yearOfBirth;
}
float Student::getAvgGrade()
{
    return avgGrade;
}
Student::~Student()
{
    ;
}
static void sumA(std::unique_ptr<int[]> B)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += B[i];

    std::cout << "SUM: " << sum << std::endl;
}

static void sumB(int* B)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += B[i];

    std::cout << "SUM: " << sum << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    ///////////////////////////////////////////////////////////////////////////
    // Недостатки обычных указателей
    ///////////////////////////////////////////////////////////////////////////
    
    // Объявление и инициализация указателей
    
    int* pointer1 = new int(123);
    // *pointer1 = 123;

    int* pointer2 = new int[10];
    for (int i = 0; i < 10; i++)
        pointer2[i] = i + 1;

    std::cout << "Адрес:" << pointer1 << std::endl;
    std::cout << "Значение:" << * pointer1 << std::endl;

    // Освобождение памяти
    delete pointer1;
    delete[] pointer2;

    ///////////////////////////////////////////////////////////////////////////
    // Проблема утечки памяти
    ///////////////////////////////////////////////////////////////////////////    
    int* p = nullptr;
    
    {
        int* p = new int[10];
        for (int i = 0; i < 10; i++)
            p[i] = i + 1;
        
        delete[] p;
    }

    ///////////////////////////////////////////////////////////////////////////
    // Умные указатели std::unique_ptr
    ///////////////////////////////////////////////////////////////////////////
    std::unique_ptr<int> pInt1(new int);
    std::unique_ptr<int[]> pIntA1(new int[10]);
    std::unique_ptr<Student> pStud1(new Student("Сергей", "Петров", "123-456-789 01", 2010, 4.5));

    std::unique_ptr<int> pInt2      = std::make_unique<int>();
    std::unique_ptr<int[]> pIntA2   = std::make_unique<int[]>(10);
    std::unique_ptr<Student> pStud2 = std::make_unique<Student>("Сергей", "Петров", "123-456-789 01", 2010, 4.5);

    // Копирование указателя запрещено
    //auto pInt3 = pInt2;
    //auto pIntA3 = pIntA2;
    //std::unique_ptr<Student> pStud3 = pStud2;

    // Передача владения c помощью move
    //auto pStud3 = std::move(pStud2);
    //std::cout << pStud3->getFullName() << std::endl;
    //std::cout << pStud2->getFullName() << std::endl;

    std::unique_ptr<int[]> A = std::make_unique<int[]>(5);
    A[0] = 10; A[1] = 20; A[2] = 30; A[3] = 40; A[4] = 50;
    for (int i = 0; i < 5; i++)
        std::cout << A[i] << std::endl;

    //sumA(A); // Ошибка! А передается копией,
    //         // а копирование unique_ptr запрещено

    sumB(A.get()); // Ошибки нет
    for (int i = 0; i < 5; i++)
        std::cout << A[i] << std::endl;

    // Использование семантики move
    sumA(std::move(A));
    // Далее ошибка - попытка работы с перемещенным объектом 
    //for (int i = 0; i < 5; i++)
    //    std::cout << A[i] << std::endl;

    // Принудительное освобождение указателей
    pInt1.reset();
    pIntA1.reset();
    pStud1.reset();
    
    pInt2.reset();
    pIntA2.reset();
    pStud2.reset();

    A.reset();

    _CrtDumpMemoryLeaks();
}