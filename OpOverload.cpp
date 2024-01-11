#include <iostream>
using namespace std;
class num
{
   private:
    int x;
   public:
    // Constructor to initialize num to 5
    num() : x(5) {}
    // Overload ++ when used as prefix
    void operator ++ ()
    {
        ++x;
    }
    // Overload ++ when used as postfix
    void operator ++ (int)
    {
        x++;
    }

    void display()
    {
        cout << "num: " << x << endl;
    }
};

int main()
{
    num num1;
    // Call the "void operator ++ (int)" function
    num1++;
    num1.display();
    // Call the "void operator ++ ()" function
    ++num1;
    num1.display();
}
