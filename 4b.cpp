// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class C {
private:
	int x;

public:
	C(int x)
	{
		this -> x = x;
	}

	// Copy constructor
	C(const C& o1)
	{
		x = o1.x;
	}

	int getX()
	{ return x; }
};

int main()
{
	C o1(10); // Normal constructor is called here
	C o2 = o1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "o1.x = " << o1.getX() << "\n";
	cout << "o2.x = " << o2.getX();
}
