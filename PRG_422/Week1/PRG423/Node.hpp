#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

template <typename T>
class Node
{
	public:

		T m_payload;
		Node* m_next;

		Node(void)
		{
			m_next = NULL;
		}


		Node(T id) 
		{
			m_payload = id;
		}

		Node(T id, Node** previous)
		{
			m_payload = id;
			m_next = *previous;
		}


		virtual ~Node(void)
		{
		
		}

		T Payload(void) 
		{
			return m_payload;
		}
		
		void SetPayload(T payload)
		{
			m_payload = payload;
		}
		
		void SetNext(Node** next_node)
		{
			m_next = *next_node;
		}

		Node* Next(void)
		{
			return m_next;
		}

		static void Unit_Test(void)
		{
			Node *n1 = new Node(0);
			Node *n2 = new Node(1);
			Node *n3 = new Node(2);

			n1->m_next = n2;
			n2->m_next = n3;

			Node *n = n1;

			while (n != NULL)
			{
				std::cout << n->m_payload << std::endl;
				n = n->m_next;
			}
		}	
};

#endif
