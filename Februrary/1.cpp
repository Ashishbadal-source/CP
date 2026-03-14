#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n>>k;
        vector<long long >arr(n);
        for(long long i=0;i<n;i++)cin >> arr[i];
        if(k==1 && n != 1){
            bool flag = true;
            for(long long i=0;i<n-1;i++){
                if(arr[i] != arr[i+1]){
                    flag = false;
                    break;
                }
            }
            if(flag==true)cout << "YES"<<endl; 
            else{
                if(k==1 && n !=1)cout << "No" <<endl;
                else cout << "YES"<<endl;
            }
        }
        else cout << "YES"<<endl;
        
    }
    return 0;
}
