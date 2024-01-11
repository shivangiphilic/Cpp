#include <iostream>
#include <stack>
#include <string>

using namespace std;

void reverseString(string &str) {
    stack<int> stk;

    for (char ch: str) stk.push(ch);

    for (int i = 0; i < str.length(); i++) {
        str[i] = stk.top();
        stk.pop();
    }
}

int main() {
    string s;
    getline(cin,s);
    cout << "Original String - " << s << endl;
    reverseString(s);
    cout << "Reversed String - " << s;
}
