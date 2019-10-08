#include <iostream>
#include "Student.h"

void Student::setStudentID(int inID)
{
	studentID = inID;
}

int Student::getStudentID()
{
	return studentID;
}

void Student::setGrade(int gradeNumber, int gradeIn)
{
	grades[gradeNumber] = gradeIn;
}

int* Student::getGrades()
{
	return grades;
}

int Student::getGrade(int gradeNumber)
{
	return grades[gradeNumber];
}

void Student::printGrades()
{
	std::cout << "StudentID = " << studentID << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "\t" << grades[i] << "\n";
	}
}

void Student::sortGrades()
{
	//sort ascending
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (grades[j] > grades[j + 1])
			{
				int temp;
				temp = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = temp;
			}
		}
	}
}

int Student::getMin()
{
	sortGrades();
	//std::cout<<"in class min"<<grades[0];
	return grades[0];
}

int Student::getMax()
{
	sortGrades();
	//std::cout<<"in class max"<<grades[9];
	return grades[9];
}

float Student::getAverageGrade()
{
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + grades[i];
	}
	return sum / 10;
}

void Course::addStudents(Student* studentIn)
{
	for (int i = 0; i < 6; i++)
	{
		students[i] = studentIn[i];
	}
}

int* Course::getAllGrades()
{
	//int grades[60];
	int k = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			grades[k] = students[i].getGrade(j);
			k = k + 1;
		}
	}
	return grades;
}

int* Course::sortAllGrades()
{
	for (int i = 0; i < 60; i++)
	{
		for (int j = 0; j < 59 - i; j++)
		{
			if (grades[j] > grades[j + 1])
			{
				int temp;
				temp = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = temp;
			}
		}
	}
	return grades;
}


int Course::getMinGrade()
{
	sortAllGrades();
	return grades[0];
}

int Course::getMaxGrade()
{
	sortAllGrades();
	return grades[59];
}

float Course::getAvgGrade()
{
	int sum = 0;
	for (int i = 0; i < 60; i++)
	{
		sum = sum + grades[i];
	}
	return sum / 60;
}

void Course::printAllGrades()
{
	for (int i = 0; i < 60; i++)
	{
		std::cout << "grade=" << grades[i] << "\n";
	}
}