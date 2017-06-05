#include "Student.hpp"
#include "Utilities.hpp"
#include "Vector.hpp"
#include <iostream>

using namespace std;

#define SUPER_DEBUG

Student::Student(void)
{
	m_id = 0;
	m_firstname = "";
	m_lastname = "";
	
}

//Student::~Student(void)
//{
//	delete[];
//}

void Student::AddGrade(int grade)
{
	
	m_grades.AddElement(grade);
}

void Student::Debug()
{
	int a = 0;
	cout << "ID = " << m_id << endl;
	cout << "Capacity = " << m_grades.GetCapacity(a) << endl;
	cout << "Number of grades = " << m_grades.GetSize(a) << endl;
	cout << "The grades that the student has are: " << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << m_grades.ElementAt(i) << endl;
	}
}
