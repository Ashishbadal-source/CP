#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b) {
            cout <<0<<endl;
            continue;
        }
        bool zero_a = false, one_a = false;
        bool zero_b = false, one_b = false;
        for(int i=0;i<a.size();i++) {
            if(a[i] == '0') zero_a = true;
            else one_a = true;
        }
        for(int i=0;i<a.size();i++) {
            if(b[i] == '0') zero_b = true;
            else one_b = true;
        }
        if(zero_a && zero_b && one_a && one_b)cout<<0<<endl;
        else cout<< 1 << endl;
        
    }
    return 0;
}


