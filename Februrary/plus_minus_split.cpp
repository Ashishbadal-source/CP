#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag2 = true;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]) != abs(arr[i+1]))flag2 = false;
        }
        if(flag2)cout<<"Yes"<<endl;
        else cout<< "No" <<endl;
    }
}