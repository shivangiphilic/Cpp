#include <iostream>
using namespace std;

// by default, all var inside a class are private

class node                              //class is basically struct
{
    int age;
    int sal;
    public:
    void getvalues(int a, int b)        //cpp allows func inside struct
    {
        age = a;
        sal = b;
    }
    void printvalues();

};
// to declare a class func outside the class, use scope resolution when declaring the func
void node::printvalues()
    {
        cout << age << " year old earns $";
        cout << sal << " per annum";
    }

int main()
{
    node N1;
    int mage,msal;
    cout << "Enter Age: ";
    cin >> mage;
    cout << "Enter Salary: ";
    cin >> msal;
    N1.getvalues(mage,msal);
    N1.printvalues();
    //cout << N1.age << " $";           //Gives ERROR
    //cout << N1.sal;                   // age and sal are not accessible in main() cuz they're private
}
