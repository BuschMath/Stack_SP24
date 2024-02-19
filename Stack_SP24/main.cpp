#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack<int> s(10);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << s.pop() << endl;
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	return 0;
}