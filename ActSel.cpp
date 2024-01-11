#include <bits/stdc++.h>
using namespace std;

struct Activity
{
	int start, end;
};

bool activityCompare(Activity s1, Activity s2)
{
	return (s1.end < s2.end);
}
void MaxAct(Activity arr[], int n)
{
	sort(arr, arr + n, activityCompare);
	cout << "Selected activities :\n";
	int i = 0;
	cout << "(" << arr[i].start << ", " << arr[i].end << ")";
	for (int j = 1; j < n; j++)
    {
		if (arr[j].start >= arr[i].end) {
			cout << ", (" << arr[j].start << ", "
				<< arr[j].end << ")";
			i = j;
		}
	}
}

int main()
{
	Activity arr[] = { { 1, 4 }, { 3, 5 }, { 0, 6 }, { 5, 7 }, { 3, 9 }, { 5, 9 }, { 6, 10 }, { 8, 11 }, { 8, 12 }, { 2, 14 }, { 12, 16 }};
	int n = sizeof(arr) / sizeof(arr[0]);
	MaxAct(arr, n);
	return 0;
}
