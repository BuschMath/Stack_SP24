#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
public:
	Stack(int size);
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
Stack<T>::Stack(int max_size)
{
	size = 0;
	stack = new T[max_size];
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
		throw "Stack is full";
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
		throw "Stack is empty";
	}
	else
	{
		size--;
		return stack[size];
	}
}

template<class T>
inline T Stack<T>::top()
{
	return stack[size-1];
}

#endif // !STACK_H

