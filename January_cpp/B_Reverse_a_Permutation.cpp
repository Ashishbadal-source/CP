#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << a[0] << endl;
            continue;
        }

        vector<int> temp = a;
        sort(temp.begin(), temp.end(), greater<int>());

        int l = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != temp[i]) {
                l = i;
                break;
            }
        }

        if (l != -1) {
            int r = l;
            for (int i = l; i < n; i++) {
                if (a[i] == temp[l]) {
                    r = i;
                    break;
                }
            }
            reverse(a.begin() + l, a.begin() + r + 1);
        }

        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
