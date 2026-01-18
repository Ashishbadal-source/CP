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

        bool bad = false;   

        while (s.size() != 1) {
            if (s[0] == s[1]) {
                if (s[0] == 'Y') {
                    int i = 0;
                    int x = s.size();
                    while (s[i] == s[i + 1]) {
                        if (i == x - 2) {
                            cout << "NO" << endl;
                            bad = true;
                            break;
                        }
                        else if(s[i]!=s[i+1]){
                            s[i] = 'Y';
                            s.erase(s.begin() + i + 1);
                        }
                        else  i++;
                    }
                if (bad == true ) break;
                s[i] = 'N';
                s.erase(s.begin() + i + 1);
            } 
            else if (s[0] == 'N') {
                s.erase(s.begin() + 1);
            }
        } 
        else {
            s[0] = 'Y';
            s.erase(s.begin() + 1);
        }
    }

        if (!bad) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
