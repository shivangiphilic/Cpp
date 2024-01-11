#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int choice,i;
    vector<int> v{ 1, 2, 3, 4, 5 };
    while(1)
    {
        cout << "\n";
        cout << "1. Insert at End\n";
        cout << "2. Delete an element\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int x;
                cout << "Enter new element: ";
                cin >> x;
                v.push_back(x);
                break;
            case 2:
                v.pop_back();
                cout << "Last element deleted\n";
                break;
            case 3:
                for (i = 0; i < v.size(); i++)
                    cout << v[i] << " ";
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice";
        }
    }
}
