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
        int n ;
        cin >> n;
        vector<int>arr(n);
        vector<int>p;
        vector<int>q;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int maxi = *max_element(arr.begin(),arr.end());
        vector<int>temp(maxi,0);
        for(int i=1;i<=n;i++){
            temp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(temp[i]%2 != 0){
                p.push_back(temp[i]);
            }
            else{
                p.push_back(temp[i]-1);
            }
        }

    }
    return 0;
}