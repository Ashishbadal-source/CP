#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        vector<long long>a(n);
        vector<long long>b(m);
        for(long long i=0;i<n;i++)cin >>a[i];
        for(long long j=0;j<n;j++)cin >>b[j];
        string s;
        cin >> s;
        vector<long long>x(n);
        for(int i=0;i<n;i++){
            if(s[i]=='L')a[i]--;
            else a[i]++;
            for(int j=0;j<m;j++){
                if(b[i]==a[i])x.push_back(n--);
                else continue;
            }
            
        }
        for(long long k=0;k<n;k++)cout << x[k] <<" ";
        cout << endl;
        
        
    }
    return 0;
}
