#include <iostream>
#define n 5
using namespace std;

class exc
{
private:
    int *arr;
    double d1;
public:
    exc(int *arr,double d1)
    {
        this -> arr = arr;
        this -> d1 = d1;
    }
    void display()
    {
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << d1;
    }
};
int main()
{
    int arr[5];

    cout << "Start\n";
    cout << "Enter 5 elements of integer array:";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    try
    {
            if(arr == NULL)
            {
                exc E(arr,0.00);
                throw E;
            }
    }
    catch(exc P)
    {
        P.display();
    }
}
