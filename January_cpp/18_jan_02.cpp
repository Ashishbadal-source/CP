#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int max_index = 0;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > arr[max_index]) {
                max_index = i;
            }
        }
        swap(arr[0], arr[max_index]);
        long long sum = 0;
        for(int i=0; i<n; i++) {
            int maxi = *max_element(arr.begin(),arr.begin()+i+1);
            sum =sum+maxi;
            
        }
        cout << sum << endl;
    }
    return 0;
}