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
        vector<long long>arr(n);
        for (long long i = 0; i <n; i++)cin>>arr[i];
        long long count = 0;
        vector<int> temp(n+1,0); 
        vector<int> arr2; 
        for (long long i=0; i<n;i++) {
            long long val = arr[i];
            temp[val]++;
            arr2.push_back(val);
            if (temp[val] ==2) {
                count += 2; 
                for (long long j = 0; j < arr2.size(); j++)temp[arr2[j]] = 0;
                arr2.clear(); 
            }
        }
        cout << count<<endl;
    }
    return 0;
}





