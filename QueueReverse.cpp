#include <bits/stdc++.h>
using namespace std;
queue<int> reverseq(queue<int> q, int k);
int main() {
    int t = 1;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = reverseq(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}

// Function to reverse first k elements of a queue.
queue<int> reverseq(queue<int> q, int k) {
    queue<int> s = q;
    queue<int> a;
    stack<int> d;
      for(int i=0; i<k; i++){
       d.push(s.front());
       s.pop();
       }
      for(int i=0; i<k; i++){
       a.push(d.top());
       d.pop();
       }
       while(! s.empty()){
       a.push(s.front());
       s.pop();
       }

    return a;

}
