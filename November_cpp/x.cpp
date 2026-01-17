#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >>a >> b;
        int sum = a+b;
        int x = log2(sum + 1);
        int y =0;
        int z = 0;
        if(a>=b){
            z =a;
            y =b;
        }
        if(b>a){
            z =b ;
            y=a;
        }
        int p = log2((3*a) + 1)/2;
        int q = log2(((3*b)/2) +1)/2;

        if(z>=p && y>= q)cout << x <<endl ;
        if(z >= p && y < q){
            int r = log2(((3*y)/2) +1)/2;
            cout << r <<endl ;
        }
        if(z < p && y >= q){
            int w = log2(((3*z)) +1)/2;
            cout << w <<endl ;
        }

    }
    return 0;
}
