#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int>arr1(n);
        vector<int>arr2(m);
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int j=0;j<m;j++)cin >> arr2[j];
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]>arr2[j])count++;
            }
        }
        cout << count <<endl;
    }
}