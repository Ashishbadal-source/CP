#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)cin>>arr[i];
        while (arr.size()>= 2) {
            bool all_even = true;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] % 2 != 0) {
                    all_even = false;
                    break;
                }
            }
            if (all_even) break;
            arr[arr.size() - 2] = arr[arr.size()-2] + arr[arr.size()-1];
            arr.pop_back();
        }
        bool flag = true;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 != 0) flag = false;
        }
        if (flag) cout << "YES" << endl;
        else cout << "No" << endl;
    }
    return 0;
}


