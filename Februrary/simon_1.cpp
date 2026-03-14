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
        vector<int> arr(n);
        for (int i = 0; i<n; i++) {
            cin >> arr[i];
        }
        int store =0;
        for (int i = 0; i<n; i++) {
            if (arr[i] == n) {
                store = i;
                break;
            }
        }
        if (store != 0)swap(arr[store], arr[0]);
        for (int i =0; i<n;i++)cout <<arr[i] << " ";
        cout << endl ;
    }

    return 0;
}