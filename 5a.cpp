#include <iostream>
#include <algorithm>
using namespace std;
template <class t, int size>
class C
{
public:
    t arr[size];
    C()
    {
        int i;
        cout << "Enter 5 elements of array: ";
        for(i=0;i<size;i++)
            cin >> arr[i];
    }
    void sorty()
    {
        sort(arr,arr+size);
    }
    void show()
    {
        int i;
        cout << "After: ";
        for(i=0;i<size;i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    C <int,5>obj;
    obj.sorty();
    obj.show();
}
