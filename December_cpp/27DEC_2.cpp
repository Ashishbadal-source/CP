#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count =0;
        if(s[0]=='u'){
            count++;
            s[0] = 's';
        }
        if(s[s.size()-1]=='u'){
            count++;
            s[s.size()-1] = 's';
        }
        for(int i=1;i<s.size()-2;i++){
            if(s[i]=='s')continue;
            else {
                if(s[i+1] == 's')continue;
                else{
                    if(s[i+1] =='u'){
                        count++;
                        s[i+1]='s';
                    }
                    else continue;
                }
            }
        }
        cout << count <<endl ;
    }
    return 0;
}
