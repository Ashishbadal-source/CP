#include <iostream>

using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    if (m < n) {
        cout << m << " " << n << endl;
        return;
    }
    if (m <= n) {
        if (m >= 2) {
            cout << 1 << " " << m << endl;
            return;
        }
    }

    for (int k = 2; k <= 31; k++) {
        long long p = (1LL << k) - 1;
        if (p > m) break;

        long long x = m % p;
        if (x == 0) x = p;

        long long d = (m - x) / p;

        if (x > 0 && d > 0 && (x + d) <= n) {
            cout << x << " " << x + d << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}