#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int max_layers = 0;

        for (int start = 0; start < 2; start++) {
            int x = a;
            int y = b;
            int z = 1; 
            int count = 0;

            while (true) {
                if ((count + start) % 2 == 0) { 
                    if (x >= z) x -= z;
                    else break;
                } else { 
                    if (y >= z) y -= z;
                    else break;
                }
                z *= 2;
                count++;
            }

            if (count > max_layers) max_layers = count;
        }

        cout << max_layers << endl;
    }

    return 0;
}
