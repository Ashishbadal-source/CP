#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin >> arr[i];
        bool flag = true ;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1])flag = false;
        }
        if(flag == true) cout << 0 <<endl;
        
        else{
            
        for(int i=n-1;i>=0;i--){
            if(i+1 != arr[i]){
                cout << arr[i]<<endl;
                break;
            }
        }
        
        }
    }
}