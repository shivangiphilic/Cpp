#include <bits/stdc++.h>

using namespace std;


int main()
{

    // initializing 1st container

    vector<int> arr1 = { 2,4,6,8,10 };


    // initializing 2nd container

    vector<int> arr2 = { 1,3,5,7,9};


    // declaring resultant container

    vector<int> arr3(10);


    // sorting initial containers

    sort(arr1.begin(), arr1.end());

    sort(arr2.begin(), arr2.end());


    // using merge() to merge the initial containers

    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());


    // printing the resultant merged container

    cout << "The container after merging initial containers is : ";


    for (int i = 0; i < arr3.size(); i++)

        cout << arr3[i] << " ";

    return 0;
}
