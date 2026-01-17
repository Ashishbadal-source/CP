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

        while (s.size() > 1) {
            bool merged = false;

            for (int i = 0; i < s.size() - 1; i++) {
                if (s[i] == 'Y' && s[i + 1] == 'Y') {
                    cout << "NO" << endl;
                    bad = true;
                    merged = true; 
                    break;
                } else if (s[i] == 'N' && s[i + 1] == 'N') {
                    s[i] = 'N';       
                    s.erase(s.begin() + i + 1);
                    merged = true;
                    break;
                } else if ((s[i] == 'Y' && s[i + 1] == 'N') || (s[i] == 'N' && s[i + 1] == 'Y')) {
                    s[i] = 'Y';        
                    s.erase(s.begin() + i + 1);
                    merged = true;
                    break;
                }
            }

            if (!merged) break;
            if (bad) break;     
        }

        if (!bad) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
