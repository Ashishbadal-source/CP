#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fast;
    int t; 
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        long long finalAns = 0;

        for (long long i = 1; i <= n*n; i++) {

            long long sum = i;

            if ((i % n) != 1) 
                sum += (i - 1);

            if ((i % n) != 0)
                sum += (i + 1);

            if (i > n)
                sum += (i - n);

            if (i <= n*n - n)
                sum += (i + n);

            finalAns = max(finalAns, sum);
        }

        cout << finalAns << endl;
    }

    return 0;
}
