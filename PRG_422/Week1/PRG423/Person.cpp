#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstring>

#include "Person.hpp"

using namespace std;


Person::Person(void)
{
	m_FirstName = "";
	m_id = 0;

}

Person::Person(int id)
{
	m_id = id;
}

//Person(cont Person & rhs) {}
//
//Person &operator = (const Person & rhs) {}
//
//
//bool operator < (cont Person &rhs);