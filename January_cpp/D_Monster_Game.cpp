#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i< n; i++) cin >> a[i];
        vector<long long>b(n);
        for (int i = 0; i< n; i++) cin >> b[i];

        sort(a.rbegin(), a.rend());
        long long ans = 0;
        long long s = 0;
        for (int k = 1; k <= n; k++) {
            s =s + b[k - 1];
            if (s > n) break;

            long long x = a[s - 1];
            long long score = x * k;
            if (score > ans) ans = score;
        }

        cout << ans << endl;
    }
    return 0;
}