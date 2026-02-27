#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k = 1;
        for (long long i= 2; i*i<=n; i++) {
            if (n%i ==0) {
                k =k*i;
                while (n%i==0)n=n/i;
            }
        }
        if (n>1)k=k*n;
        cout<<k<<endl;
    }
}