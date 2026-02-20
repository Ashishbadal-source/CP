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





// class Solution {
// public:
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         int count=0;
//         vector<int>arr;
//         vector<int>temp(100,0);
//         for(int i=0;i<nums.size();i++){
//            temp[nums[i]]++;
//         }
//         for(int i=0;i<temp.size();i++){
//             if(temp[i]>1)arr.push_back(i);
//         }
//         return arr;
//     }
// };


// class Solution {
// public:
//     int scoreOfString(string s) {
//         int sum=0;
//         for(int i=0;i<s.size()-1;i++){
//             sum+= abs(int(s[i]-s[i+1]));
//         }
//         return sum;
//     }
// };