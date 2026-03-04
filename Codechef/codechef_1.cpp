#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> b(n, 0);
        vector<int> hits(n, 0);
        set<int> p;
        
        for(int i = 0; i < n; i++) {
            p.insert(i);
        }
        
        for(int i = 0; i < n; i++) {
            if(p.find(i) == p.end()) continue;
            vector<int> remove;
            for(int j : p) {
                if(j != i) {
                    hits[j]++;
                    b[j]++;
                    if(hits[j] >= a[j]) {
                        remove.push_back(j);
                    }
                }
            }
            
            p.erase(i);
            
            for(int j : remove)p.erase(j);
            
        }
        
        for(int i = 0; i < n; i++) {
            cout << b[i];
            if(i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}


