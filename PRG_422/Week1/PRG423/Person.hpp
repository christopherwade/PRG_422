#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
	public:
		std::string m_FirstName;
		int m_id;

		Person(int id);
		Person(void);

		
	/*Person(cont Person & rhs);
	Person &operator = (const Person & rhs);
	bool operator < (cont Person &rhs);*/

};

#endif