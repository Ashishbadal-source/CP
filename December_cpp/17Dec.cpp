#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        int n,m ;
        cin >> n >> m ;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++)cin >> a[i];
        for(int j=0;j<m;j++)cin >> b[j];
        while(a.size()>0 && b.size()>0){
            int x1 = a[0];
            int y1 = b[0];
            if(y1<=x1)b.erase(b.begin());
            if(y1>x1)b[0] = b[0]-x1 ;

            if(b.size()==0)break;
            int x2 = b[0];
            int y2 = a[0];
            if(y2<=x2)a.erase(a.begin());
            if(y2>x2)a[0] = a[0]-x2 ;
        }
        if(a.size()==0)cout << "Bob" <<endl; 
        else cout << "Alice"<< endl; 
    }
    return 0;
}