#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

template <class T>
class Stack
{
public:
	Stack(int max_size_);
	~Stack();

	bool isEmpty();
	bool isFull();
	void push(T item);
	T pop();
	T top();

private:
	T *stack;
	int size;
	int max_size;
};

template <class T>
Stack<T>::Stack(int max_size_)
{
	size = 0;
	max_size = max_size_;
	stack = new T[max_size_];
}

template <class T>
Stack<T>::~Stack()
{
	delete[] stack;
}

template<class T>
inline bool Stack<T>::isEmpty()
{
	if (size == 0)
	{
		return true;
	}

	return false;
}

template<class T>
inline bool Stack<T>::isFull()
{
	if (size == max_size)
	{
		return true;
	}

	return false;
}

template<class T>
inline void Stack<T>::push(T item)
{
	if (isFull())
	{
		cout << "Stack is full";
	}
	else
	{ 
		stack[size] = item;
		size++;
	}
}

template<class T>
inline T Stack<T>::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty";
	}
	else
	{
		size--;
		return stack[size];
	}

	return 0;
}

template<class T>
inline T Stack<T>::top()
{
	return stack[size-1];
}

#endif // !STACK_H

