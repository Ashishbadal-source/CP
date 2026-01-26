#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long>arr1(n);
        vector<long long>arr2(n);
        for(int i = 0; i < n; i++)cin >> arr1[i];
        for(int i = 0; i < n; i++)cin >> arr2[i];
        vector<long long> maxi(n);
        for(int i = 0; i < n; i++) {
            maxi[i] =max(arr1[i], arr2[i]);
        }

        vector<long long> maxi2(n);
        maxi2[n-1] = maxi[n-1];
        for(int i = n-2; i >= 0; i--) {
            maxi2[i] =max(maxi[i], maxi2[i+1]);
        }

        vector<long long>arr(n + 1, 0);
        for(int i = 0; i < n; i++) {
            arr[i+1] = arr[i]+maxi2[i];
        }

        for(int k =0; k<q; k++) {
            int l, r;
            cin >> l >> r;
            cout << arr[r] - arr[l-1];
            if(k < q- 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}