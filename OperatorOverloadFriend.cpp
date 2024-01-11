#include <iostream>
using namespace std;

class loc
{
	int longitude, latitude;

	public:
	loc() {}
	loc(int lg, int lt)
	{
		longitude = lg;
		latitude = lt;
	}
	void show()
	{
		cout << longitude << " ";
		cout << latitude << "\n";
	}
	friend loc operator+(loc op1, loc op2);
	friend loc operator+(int op1, loc op2);
	friend loc operator+(loc op2, int op1);
	friend loc operator++(loc &op);
	friend loc operator++(loc &op, int x);

};


loc operator+(loc op1, loc op2)
{
	loc temp;
	temp.longitude = op1.longitude + op2.longitude;
	temp.latitude = op1.latitude + op2.latitude;
	return temp;
}

loc operator+(loc op1, int op2)
{
	loc temp;
	temp.longitude = op1.longitude + op2;
	temp.latitude = op1.latitude + op2;
	return temp;
}

loc operator+(int op1, loc op2)
{
	loc temp;
	temp.longitude = op1 + op2.longitude;
	temp.latitude = op1 + op2.latitude;
	return temp;
}

loc operator++(loc &op)
{
	op.longitude++;
	op.latitude++;
	return op;
}

loc operator++(loc &op, int x)
{
	op.longitude++;
	op.latitude++;
	return op;
}

int main()
{
	loc ob1(10, 20), ob2( 5, 30);
	//ob1 = operator+(ob1 , ob2);
	ob1 = ob1 + ob2;
	ob1.show();

	++ob1;
	ob1.show();

	ob1++;
	ob1.show();

	ob1 = ob1+10;
	ob1.show();

	ob1 = 10+ ob1;
	ob1.show();

	return 0;
}
