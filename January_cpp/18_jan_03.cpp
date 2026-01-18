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
        set<long long> s1;
        for(int i = 0; i < n; i++) {
            long long val;
            cin >> val;
            s1.insert(val); 
        }
        vector<long long> v(s1.begin(), s1.end());
        int count = 0, maxi = 0;
        for(int i = 0; i < v.size(); i++) {
            if(i > 0 && v[i] == v[i-1] + 1) count++;
            else count = 1;
            if(count > maxi) maxi = count;
        }
        
        cout << maxi << endl;
    }
    return 0;
}