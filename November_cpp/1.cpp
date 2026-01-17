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
        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string base = "";
        for (int i = 0; i < n; i++) {
            string front = arr[i] + base;
            string back  = base + arr[i];
            base = min(front, back);
        }

        cout << base << '\n';
    }
    return 0;
}
