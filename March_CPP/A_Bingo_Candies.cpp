#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<vector<int>>arr(n, vector<int>(n));
        int maxi =0;
        for(int i = 0;i<n;i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
                maxi = max(maxi,arr[i][j]);
            }
        }
        vector<int>temp(maxi+1, 0); 
        for(int i = 0; i < n; i++) {
            for(int j= 0; j<n;j++) {
                temp[arr[i][j]]++;
            }
        }
        bool exist =true;
        if (n == 1)exist=false; 
        else {
            for(int i =0; i <=maxi; i++) {
                if(temp[i] > n*(n-1)) {
                    exist =false;
                    break;
                }
            }
        }
        if(exist)cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}






