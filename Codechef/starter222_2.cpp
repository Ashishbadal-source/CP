#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i <n; i++)cin >> arr[i];
        vector<int>tempy(n+1, 0);
        for(int i=0; i< n; i++) {
            tempy[arr[i]]++;
        }
        int maxi = -1; 
        int count = 1; 
        for(int i = 1; i <= n; i++) {
            if(tempy[i] >maxi) {
                maxi = tempy[i];
                count = i;
            }
        }
        int tie=0;
        bool flag= true;
        cout << count << endl;
    }
    return 0;
}