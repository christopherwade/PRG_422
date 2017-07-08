#ifndef LINEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

template <typename T>
class LinkedList
{
public:
	LinkedList(void)
	{
		m_head = NULL;
		m_tail = NULL;
	}

	void AddNode(T id)
	{
		Node<T> *newNode = new Node<T>;
		newNode->m_payload = id;
		newNode->m_next = NULL;

		Node<T> *temp = m_head;

		if (temp != NULL)
		{
			while (temp->m_next != NULL)
			{
				temp = temp->m_next;
			}

			temp->m_next = newNode;
		}
		else
		{
			m_head = newNode;
		}
	}

	void print()
	{
		Node<T> *temp = m_head;

		if (temp == NULL)
		{
			cout << "The List is empty." << endl;
		}

		if (temp->m_next == NULL)
		{
			cout << temp->m_payload << endl;
		}
		else
		{
			while (temp != NULL)
			{
				cout << temp->m_payload;
				temp = temp->m_next;
				cout << ",";
				cout << endl;
			}
		}

	}

	void insert(T value)
	{
		Node<T>* newNode = new Node<T>;

		newNode->m_payload = value;

		if (m_head == NULL)
		{
			m_head = newNode;
		}
		else
		{
			newNode->m_next = m_head;
			m_head = newNode;
		}

	}

private:
	Node<T> *m_head;
	Node<T> *m_tail;
};

#endif // !LINKEDLIST_HPP

