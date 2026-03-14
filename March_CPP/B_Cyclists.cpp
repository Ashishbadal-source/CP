#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,k,p;
        long long m;
        cin >> n >> k >> p >> m;

        vector<long long>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        deque<int> deck;
        for(int i=0;i<n;i++) deck.push_back(i);
        long long ans = 0;
        while(true){
            bool flag = false;
            int pos = -1;
            for(int i=0;i<min(k,(int)deck.size());i++){
                if(deck[i] == p-1){
                    flag= true;
                    pos = i;
                    break;
                }
            }
            if(flag){
                if(m < a[p-1]) break;
                m -= a[p-1];
                ans++;
                int x = deck[pos];
                deck.erase(deck.begin()+pos);
                deck.push_back(x);
            }
            else{
                long long mini = LLONG_MAX;
                int pos2 = -1;
                for(int i=0;i<min(k,(int)deck.size());i++){
                    if(a[deck[i]] < mini){
                        mini = a[deck[i]];
                        pos2 = i;
                    }
                }
                if(m < mini) break;
                m -= mini;
                int x = deck[pos2];
                deck.erase(deck.begin()+pos2);
                deck.push_back(x);
            }
        }

        cout << ans << endl;
    }
}







