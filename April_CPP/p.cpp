#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            long long val;
            cin >> val;
            arr[i] = val-i;
        }
        sort(arr.begin(),arr.end());
        long long count =0;
        long long left =0;
        while (left < n) {
            long long right = left;
            while (right < n && arr[right] == arr[left])right++;
            long long m = right-left;
            count +=(m * (m-1)) / 2;
            left = right;
        }
        cout << count << endl;
    }
    return 0;
}







