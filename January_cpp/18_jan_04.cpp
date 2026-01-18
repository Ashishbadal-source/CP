#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, h;
        cin >> n >> m >> h;
        
        vector<long long> a(n); 
        for(int i = 0; i < n; i++) cin >> a[i];
        
        vector<long long> orig = a; 
        vector<int> change; 
        for(int i = 1; i <= m; i++) {
            long long b, c;
            cin >> b >> c;
            int p = b - 1; 
            a[p] = a[p] + c;
            change.push_back(p); 
            if(a[p] > h) {
                for(int j = 0; j < change.size(); j++) {
                    int index = change[j]; 
                    a[index] = orig[index];
                }
                change.clear(); 
            }
        }
        for(int i =0; i<n;i++) cout<< a[i] << " ";
        cout << endl;
    }
    return 0;
}