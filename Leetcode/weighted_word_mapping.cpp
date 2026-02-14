// class Solution {
// public:
//     string mapWordWeights(vector<string>& words, vector<int>& weights) {
//         string s= "";
//         for(int i=0;i<words.size();i++){
//             int sum =0;
//             for(int j=0;j<words[i].size();j++){
//                 sum+= weights[words[i][j]-'a'];
//             }
//             int m = sum%26;
//             char x = 'z' -m;
//             s += x;
//         }
//         return s;
        
//     }
// };