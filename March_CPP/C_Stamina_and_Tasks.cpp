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
        vector<pair<double, double>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        double ans = 0; 
        for(int i = n - 1; i >= 0; i--) {
            double c = v[i].first;
            double p = v[i].second;
            double curr = c + ans * (1.0 - (p / 100.0));
            if(curr > ans) {
                ans = curr;
            }
        }

        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}









