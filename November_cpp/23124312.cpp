#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;

        float x = A / 100.0;
        float y = B / 225.0;

        if (x < y) cout << "Small" <<endl;
        else if (x > y) cout << "Large" <<endl;
        else cout << "Equal" <<endl;
    }
    return 0;
}
