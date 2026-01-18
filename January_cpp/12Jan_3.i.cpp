#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        long long n, k;
        cin >> n >> k;

        if(k > n) {
            cout << -1 << endl;
            continue;
        }
        if(n == k) {
            cout << 0 << endl;
            continue;
        }

        long long t = 0;
        long long just = n;
        bool ok = true;

        while(just > k) {
            long long left = just / 2;
            long long nxt = (just + 1) / 2;

            if(k == left || k == nxt) {
                t++;
                break;
            }
            else if(k < left || k < nxt) {
                if(k <= nxt) just = nxt;
                else just = left;
                t++;
            } 
            else {
                ok = false;
                break;
            }
        }

        if(ok) cout << t << endl;
        else cout << -1 << endl;
    }
}
