#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n,s,x;
        cin >> n>> s>> x;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++)cin >>arr[i];
        long long sum =0;
        for(long long i=0;i<n;i++){
            sum = sum+arr[i];
        }
        if(sum > s)cout << "NO" <<endl;
        else if((s-sum)%x == 0)cout << "YES"<<endl;
        else cout << "NO"<<endl;

        
    }
    return 0;
}
