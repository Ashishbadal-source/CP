#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a>> b;
        int sum = a+b;
        int x = log2(sum + 1);
        int add1 =1 ;
        int y,z = 0;
        if(a>b){
            z =a;
            y =b;
        }
        if(b>a){
            z =b ;
            y=a;
        }

        if(a>b)
        if(x%2 != 0){
            int p = x/2;
            for(int i=0;i<p+1 ;i++){
                add1 += add1 * 2;
            }
            if(z >= add1)z =20 ;
            else z =10 ;

            int add2 = 2;
            for(int j=0;j<p;j++){
                add2 += add2 *2 ;
            }
            if(y >= add2)y =20;
            else y =10;
        }
        if(x%2 == 0){
            int p = x/2;
            for(int i=0;i<p ;i++){
                add1 += add1 * 2;
            }
            if(z >= add1)z =20 ;
            else z =10 ;

            int add2 = 2;
            for(int j=0;j<p;j++){
                add2 += add2 *2 ;
            }
            if(y >= add2)y =20;
            else y =10;
        }
        if(z==20 && y ==20 )cout << x <<endl ;
                
    }
    return 0;
}
