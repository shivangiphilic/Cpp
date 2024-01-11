#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    string name;
    int age;
    public:
    Student(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void * operator new(size_t size)
    {
        cout<<"Constructor is called"<<endl;
        cout<<"Overloading new operator with size: "<<size<<endl;
        void * p = ::operator new(size);
        return p;
    }
    void operator delete(void * p)
    {
        cout<<"Overloading delete operator "<<endl;
        free(p);
    }
};
int main()
{
    string name;
    int age;
    cin>>name;
    cin>>age;
    Student * p = new Student(name,age);
    p->display();
    delete p;
}
