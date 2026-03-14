#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int>arr1(n);
        vector<int>arr2(n);
        for (int i=0;i <n; i++)cin >>arr1[i];
        for (int i=0; i< n; i++)cin >>arr2[i];
        int mini =0;
        int diff = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr1[i] -arr2[i] <diff) {
                diff = arr1[i] - arr2[i];
                mini = i;
            }
        }
        long long sum =0;
        for (int i =0; i<n; i++) {
            if (i ==mini) sum = sum + arr2[i];
            else sum += arr1[i];
        }
        cout <<sum << endl;
    }
    return 0;
}

