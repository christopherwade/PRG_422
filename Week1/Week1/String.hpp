#ifndef STRING_HPP
#define STRING_HPP
#include "Vector.hpp"

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;
//Using templates

class String : public Vector<char>

{
	public:
		String(const char* c_str)
			:Vector<char>()
		{
			size_t sizeofString = strlen(c_str);

			for (size_t i = 0; i < sizeofString; i++)
			{
				AddElement(c_str[i]);
			}

		}



		String()
			:Vector<char>()
		{

		}

		~String()
		{

		}

		int FindFirstOccurrence(char c)
		{
			bool success = false;
			int rt = 0;

			for (size_t i = 0; i < GetSize(); i++)
			{
				if (ElementAt(i) == c)
				{
					success = true;
					rt = i;
					break;
				}
			}

			if (!success)
			{
				cout << rt << endl;
			}
			else
			{
				cout << rt << endl;
			}

			return rt;
		}

		Vector<String> Split(char * pattern)
		{
			size_t sz = strlen(pattern);
			size_t count = 0;
			for( int i = 0; i < m_counter; i++ )
			{
			    for( int j = 0; j < sz; j++ )
			    {
				     if( pattern[j] == m_counter[i] ) 
					 {
			            count++;
					 }
					 else
					 {
						 count = 0;
			         }
				}
			}
		}

		static void Unit_Test(void)
		{
			//Vector<String> VecofString = s1.Split(" ");
			
			//int FirstOccurrence = s1.FindFirstOccurrence('i');
		}

};

#endif