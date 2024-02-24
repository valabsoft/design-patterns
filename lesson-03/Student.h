#pragma once
#include <string>
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
	~Student() = default;
	
	std::string getFullName();
	std::string getIndInsAccNumber();
	unsigned short getYearOfBirth();
	float getAvgGrade();	
};

