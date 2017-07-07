#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList
{
	public:
		LinkedList(void)
		{
			m_head = m_tail = NULL;
		}

		void AddNode(int id)
		{
			//m_head = new Node(id);
			//m_tail = m_head;

			m_counter++;

			Node* n = new Node(id);
			m_head->m_next = n;
			m_head = n;
		}
		
		Node* Head()
		{
			return m_head;
		}

		Node* Tail()
		{
			return m_tail;
		}

		Node* PrintNodesRecursively(Node* input)
		{
		
		}

		static void Unit_Test()
		{
			LinkedList List1;

			List1.AddNode(13);
			List1.AddNode(12);
			List1.AddNode(10);

			Node *p = List1.Head();


			if (p == NULL)
			{
				std::cout << "The list is empty" << std::endl;
				return;
			}

			
			while (p != NULL) 
			{ 
				std::cout << p->m_payload << std::endl;
				p = p->m_next;
			}
		
		}

	protected:
		Node* m_head;
		Node* m_tail;
		int   m_counter;
};


#endif // !LINKEDLIST_HPP

