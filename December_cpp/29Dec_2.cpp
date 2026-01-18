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
        string s ;
        cin >> s;
        int p = 0;
        string arr[n];
        for(int i=0;i<s.size();i++){
            arr[i] = s[i];
        }
        for(int j = 0;j<n;j++){
            if(s[j]=='2'){
                if(s[j+1]=='0'){
                    if(s[j+2]=='2'){
                        if(s[j+3]=='5'){
                            p = 1 ;
                        }
                    }
                }
            }
        }
         for(int j = 0;j<n;j++){
            if(s[j]=='2'){
                if(s[j+1]=='0'){
                    if(s[j+2]=='2'){
                        if(s[j+3]=='6'){
                            p = 2 ;
                            break;
                        }
                    }
                }
            }
        }
        if(p == 2 || p == 0)cout << '0' << endl;
        else cout << '1'<< endl;
    }
    return 0;
}
