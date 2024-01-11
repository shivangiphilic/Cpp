#include <iostream>
using namespace std;

class person
{
    string name;
    int age;
public:
    person();
    person(string name, int age);
    person(person &);
    void print();
    //void getter(int i);
    //person setter();
};

person :: person()
{
    cout << "Default Constructor\n";
    name = "unknown";
    age = 0;
}

person :: person(string Name, int Age)
{
    cout << "Constructor with args\n";
    name = Name;
    age = Age;
}

person :: person(person &p)
{
    cout << "Copy Constructor\n";
    name = p.name;
    age = p.age;
}

bperson :: ~person()
{
    cout << "Destructor\n";
}

void person :: print()
{
    cout << "Name is " << name << "\n";
    cout << "Age is " << age << "\n";
}

int main()
{
    person p1;
    p1.print();

    person p2("Nitish",20);
    p2.print();

    person p3  = p2;
    p3.print();

}
