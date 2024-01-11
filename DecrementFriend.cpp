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
	friend loc operator-(loc op1, loc op2);
	friend loc operator-(int op1, loc op2);
	friend loc operator-(loc op2, int op1);
	friend loc operator--(loc &op);
	friend loc operator--(loc &op, int x);
	friend loc operator+(loc &op, int x);
	friend loc operator+=(loc &op2, int op1);
};


loc operator-(loc op1, loc op2)
{
	loc temp;
	temp.longitude = op1.longitude - op2.longitude;
	temp.latitude = op1.latitude - op2.latitude;
	return temp;
}

loc operator-(loc op1, int op2)
{
	loc temp;
	temp.longitude = op1.longitude - op2;
	temp.latitude = op1.latitude - op2;
	return temp;
}

loc operator-(int op1, loc op2)
{
	loc temp;
	temp.longitude = op1 - op2.longitude;
	temp.latitude = op1 - op2.latitude;
	return temp;
}

loc operator--(loc &op)
{
	op.longitude--;
	op.latitude--;
	return op;
}

loc operator--(loc &op, int x)
{
	op.longitude--;
	op.latitude--;
	return op;
}

loc operator+(loc &op, int x)          //overloading += for one loc and one int
{
	op.longitude = op.longitude+x;
	op.latitude = op.latitude+x;
	return op;
}

loc operator+=(loc &op2, int op1)         //overloading += for two loc objects
{
	op2.longitude += op1;
	op2.latitude += op1;
	return op2;
}

int main()
{
	loc ob1(100, 200), ob2( 20, 50);
	//ob1 = operator-(ob1 , ob2);
	ob1 = ob1 - ob2;
	ob1.show();

	--ob1;
	ob1.show();

	ob1--;
	ob1.show();

	ob1 = ob1-10;
	ob1.show();

	ob1 = 10- ob1;
	ob1.show();

	ob1 = ob1+5;
	ob1.show();

	ob1 += 5;
    ob1.show();

	return 0;
}
