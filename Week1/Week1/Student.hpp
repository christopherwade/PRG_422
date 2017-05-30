#ifndef  STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student
{
	private:
		int m_id;
		std::string m_firstname;
		std::string m_lastname;
		int* m_grades;
		int m_capacity;
		int m_num_grades;
		int m_counter;

	public:
		void AddGrade(int grade);
		void Debug();
		Student(void);
		~Student(void);	
};
#endif // ! STUDENT_HPP
