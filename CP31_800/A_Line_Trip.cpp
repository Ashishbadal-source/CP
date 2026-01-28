#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n ,x;
        cin >> n>> x;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin >> arr[i];
        sort(arr.begin(), arr.end());
        if(n==1)cout << arr[0];
        else {
            int maxi =0;
            for( int i=1;i<n;i++){
                if((arr[i] - arr[i-1])>maxi)maxi = arr[i] - arr[i-1] ;
                    } 
                if(x>arr[n-1]){
                if((2*(x-arr[n-1])) > maxi)maxi = 2*(x-arr[n-1]);
            }       
        cout << maxi << endl;
        }
        
    }
    return 0;
}
