#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fast;
    int t = 1;
    while (t--) {
        long long n=3;
        vector<long long>arr(n) ;
        for(long long i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        arr.push_back(-1);
        long long count =0;
        long long i =0;
        long long total =0;
        while(i<arr.size() && arr[i]!= -1){
            long long freq = arr[i];
            while(i<arr.size() && arr[i] == freq){
                i++;
                count++;
                if(count == freq)count =0;
            }
            total = total+count ;
            count =0;
        }

        cout << total << endl;  
    }
    return 0;
}