// You are using GCC
#include <bits/stdc++.h>
using namespace std;
int maxi_dis(int arr[],int n)
{
    unordered_map<int, int> mp;
    int dis = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
            dis = max(dis, i - mp[arr[i]]);
        else
            mp[arr[i]] = i;
    }
    return dis;
}
int main()
{
    int n,a[n],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin >> a[i];
    cout << maxi_dis(a,n);
    return 0;
}
