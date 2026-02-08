#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long>arr(n);
        for(long long i = 0 ;i<n;i++)cin>>arr[i];
        long long paise =0;
        for(long long i=0;i<n;i++){
            paise = paise + (y*(arr[i]/x));
        }
        long long ans =0;
        for(long long i =0;i<n;i++){
            long long maxi = (arr[i] + (paise - (arr[i]/x)*y));
            ans = max(ans , maxi );
        }
        cout << ans << endl;
    }
    return 0;
}
