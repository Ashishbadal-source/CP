#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n,w;
        cin >> n >> w;
        long long count=0;
        count = n - (n/w);
        cout << count << endl;
        
    }
    return 0;
}
