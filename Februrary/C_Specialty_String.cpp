#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n%2!= 0) {
            cout <<"no"<< endl;
            continue; 
        }
        stack<char> stk;
        for (int i = 0; i < n; i++){
            char current = s[i];
            if (!stk.empty() && stk.top() == current)stk.pop();
            else stk.push(current);
            
        }
        if (stk.empty()) cout << "yes"<< endl;
        else cout<< "no"<<endl;
    }
    return 0;
}