#include "Student.hpp"
#include "Utilities.hpp"

#include <iostream>

using namespace std;

Student::Student(void)
{
	m_id = 0;
	m_firstname = "";
	m_lastname = "";
	m_capacity = 10;
	m_num_grades = 0;
	m_counter = 0;

	m_grades = new int[10];
}

Student::~Student(void)
{
	delete[] m_grades;
}

void Student::AddGrade(int grade)
{
	m_num_grades++;
	m_counter++;

	for (int i = 0; i < m_capacity; i++)
	{
		if (m_num_grades > m_capacity)
		{
			ExtendArrayInt(&m_grades, m_capacity, m_counter);
		}
		else
		{
			m_grades[i] = grade;
		}

		//m_grades[m_counter-1] += m_grades[grade];		
	}
	
}

void Student::Debug()
{
	cout << "ID = " << m_id << endl;
	cout << "Capacity = " << m_capacity << endl;
	cout << "Number of grades = " << m_num_grades << endl;
	cout << "The grades that the student has are: " << endl;
	for (int i = 0; i < m_num_grades; i++)
	{
		cout << m_grades[i] << endl;
	}
}
