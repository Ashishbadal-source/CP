#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        int l,a,b;
        cin >> l>> a >> b;
        vector<int>arr(l,0);
        for(int i=0;i<l;i++){
            int ans = (a+i*b)%l;
            arr.push_back(ans);
        }
        sort(arr.rbegin(),arr.rend());
        cout << arr[0] <<endl;
    }
    return 0;
}