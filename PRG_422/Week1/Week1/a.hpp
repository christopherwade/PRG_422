
#ifndef CLASS_A
#define CLASS_A

class A
{
	public:
		A();
		~A();

		void AddNumber(int n);
		void Debug(void);


	private:
		// the notation <TYPE*> means we are delcaring a pointer to a variable of type int
		int* array;
		int m_counter; //Chris Wade way
};

#endif // CLASS A