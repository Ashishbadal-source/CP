#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string>arr(n);
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), [](const string &a, const string &b) {
            return a + b < b + a;
        });
            
        string base = "";
        for (int i = 0; i < n; i++) {
            string front = arr[i] + base;
            string back  = base + arr[i];
            base = min(front, back);
        }
        cout << base << endl;
    }
    return 0;
}