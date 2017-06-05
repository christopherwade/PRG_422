#ifndef  STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include "Vector.hpp"

class Student
{
	private:
		int m_id;
		std::string m_firstname;
		std::string m_lastname;
		Vector<int> m_grades;

	public:
		void AddGrade(int grade);
		void Debug();
		Student(void);
		//~Student(void);

};
#endif // ! STUDENT_HPP
