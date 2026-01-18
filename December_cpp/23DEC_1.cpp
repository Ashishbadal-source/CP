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
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin >> arr[i];
        if(n%2 ==0)cout << 'yes' ;
        else {
            vector<int>temp(n);
            for(int i = 0;i<n;i++){
                temp[i] = arr[i];
            }
            sort(temp.begin(),temp.end());
            
        }
        vector<string>temp1(n);
        for(int i =1;i<=n;i++){
            if(i%2 !=0){
                temp1[i] = 'red' ;
            }
            else {
                temp1[i] = 'blue' ;
            }
        }

    }
    return 0;
}
