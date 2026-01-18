#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int s,k,m;
        cin >> s >> k >> m;
        if(k>=s){
            if(m>k){
                if(k%s < s)cout << m%s << endl;
                else cout << 0<<endl;
            }
            else cout << 0 <<endl;
        }
        else if(m%k==0){
            if(k>m)cout << s-m << endl;
            else cout << s%k << endl ;
        }
        else {
            cout << m%k <<endl;
        }

    }
    return 0;
}
