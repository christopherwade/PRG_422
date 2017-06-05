
#ifndef VECTOR_HPP
#define VECTOR_HPP


//define the capacity to a default value.
#define VECTOR_DEFAULT_CAPACITY 64

//create a type definition for an unsigned long int
typedef unsigned long int count_t;

template <typename T> class Vector
{
protected:
	T* 			m_buffer;
	count_t 	m_counter;
	count_t 	m_capacity;

public:
	Vector(void)
	{
		m_capacity = VECTOR_DEFAULT_CAPACITY;
		m_counter = 0;
		m_buffer = new T[m_capacity];

	}

	virtual ~Vector(void)
	{
		delete[] m_buffer;
	}

	void AddElement(T element)
	{
		m_counter++;

		if (m_counter > m_capacity)
		{
			std::cout << "Reallocation triggered" << std::endl;

			ExtendArray<T>(&m_buffer, m_capacity, 2 * m_capacity);
			m_capacity += 10;
		}
		m_buffer[m_counter - 1] = element;
	}

	T ElementAt(int index)
	{
		return m_buffer[index];
	}

	T GetCapacity(count_t a)
	{
		a = m_capacity;
		return a;
	}

	T GetSize(count_t a)
	{
		a = m_counter;
		return a;
	}
	
};





#endif // VECTOT_HPP defined
