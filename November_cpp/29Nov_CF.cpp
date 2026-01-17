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
        int n;
        cin >> n;
        int y,r;
        cin >> y>> r ;
        int ans = r+y/2 ;
        if(ans>n)cout << n <<endl;
        else cout << ans <<endl ;
    }
    return 0;
}
