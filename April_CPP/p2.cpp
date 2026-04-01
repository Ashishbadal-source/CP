#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<long long>& arr, long long m) {
    if (mid == 0)return true;
    long long ppl = 0;
    for (long long i=0;i<arr.size();i++)ppl +=(arr[i]/mid);
    return ppl >=m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin >> n >> m;
    vector<long long>arr(n);
    for (long long i=0;i<n;i++)cin>> arr[i];
    long long low = 0;
    long long high =1e9;
    long long ans =0;
    while (low<=high){
        long long mid = low+(high-low)/2;
        if (check(mid,arr,m)){
            ans = mid;
            low = mid+1;
        } 
        else high = mid-1;
    }
    cout << ans << endl;
    return 0;
}













