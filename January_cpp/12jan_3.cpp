#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long fl = (m / k) * k;
        long long tp= m - fl;

        long long end = s - tp;
        if (end < 0) end = 0;

        cout << end << endl;
    }
    return 0;
}
