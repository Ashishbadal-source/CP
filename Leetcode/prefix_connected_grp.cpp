// class Solution {
// public:  
//     int prefixConnected(vector<string>& words, int k) {
//         map<string,int>mp;
//         int ans=0;
        
//         for(int i=0;i<words.size();i++){
//             string s="";
//             if(words[i].size()<k) continue;
//             for(int j=0;j<k;j++){
//                 s+=words[i][j];
//             }
//             mp[s]++; 
//         }
//         for(auto &it:mp){
//             if(it.second>1){
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };