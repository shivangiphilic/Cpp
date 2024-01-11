// C++ program to demonstrate function overriding
// by calling the overridden function
// of a member function from the child class

#include <iostream>
using namespace std;

class Parent
{
public:
	void show()
	{
		cout << "Base Function\n";
	}
};

class Child : public Parent
{
public:
	void show()
	{
		cout << "Derived Function\n";
		// call of overridden function
		Parent::show();
	}
};

int main()
{
	Child dc;
	dc.show();
	return 0;
}
