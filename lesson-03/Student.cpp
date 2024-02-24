#include "Student.h"

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