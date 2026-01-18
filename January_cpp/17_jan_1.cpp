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
        vector<pair<int, int>> ar(n);
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
         ar[j] = {val, j % 2};
        }

        sort(ar.begin(), ar.end());

        bool ok = true;
        for (int j = 0; j < n - 1; j++) {
            if (ar[j].second == ar[j + 1].second) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << endl ;
        else  cout << "NO" << endl ;
        
    }
    return 0;
}