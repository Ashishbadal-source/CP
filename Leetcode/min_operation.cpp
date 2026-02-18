// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             count += min(nums[i]%3,3-nums[i]%3) ;
//         }
//         return count;
//     }
// };


// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         vector<int>arr;
//         arr = nums;
//         for(int i=0;i<nums.size();i++){
//             arr.push_back(nums[i]);
//         }
//         return arr;
//     }
// };


// class Solution {
// public:
//     vector<int> findWordsContaining(vector<string>& words, char x) {
//         vector<int>arr;
//         for(int i=0;i<words.size();i++){
//             for(int j=0;j<words[i].size();j++){
//                 if(words[i][j] == x){
//                     arr.push_back(i);
//                     break;
//                 }
//             }
//         }
//         return arr;
//     }
// };