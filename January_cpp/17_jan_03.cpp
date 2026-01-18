#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string arr;
        cin >> arr;
        string temp = arr;
        sort(temp.begin(), temp.end());
        if (arr == temp) cout << "Bob" << endl;

        else {
            cout << "Alice" << endl;
            string temp2 = arr;
            vector<long long> ash;

            for (long long i = 0; i < n; i++) {
                if (temp2[i] != temp[i]) ash.push_back(i + 1);
                
            }
            
            long long count = ash.size();
            cout << count << endl;
            for (long long i = 0; i < count; i++)cout << ash[i] << " ";
            cout << endl;
        }
    }
    return 0;
}