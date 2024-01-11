#include <bits/stdc++.h>
using namespace std;

void intLeaveQue(queue<int>& q,int n)
{

	if (n % 2 != 0)
		cout << "You have entered odd number of elements!" << endl;

	stack<int> s;
	int halfSize = n / 2;

	for (int i = 0; i < halfSize; i++) {
		s.push(q.front());
		q.pop();
	}

	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}

	for (int i = 0; i < halfSize; i++) {
		q.push(q.front());
		q.pop();
	}

	for (int i = 0; i < halfSize; i++) {
		s.push(q.front());
		q.pop();
	}

	while (!s.empty()) {
		q.push(s.top());
		s.pop();
		q.push(q.front());
		q.pop();
	}
}

int main()
{
    int n,i;
    cin >> n;
	queue<int> q;
	for(i=1;i<=n;i++)
    {
        q.push(i);
    }
	intLeaveQue(q,n);
	for (i = 0; i < n; i++) {
		cout << q.front() << " ";
		q.pop();
	}
}
