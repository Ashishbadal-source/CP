// class Solution {
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>result = nums;
        
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 int index = ((i+nums[i])%n) ;
//                 if(index<0)index = index+n;
//                 result[i] = nums[index];
//             }
//             else if(nums[i]<0){
//                 int index2 = ((i-abs(nums[i]))%n);
//                 if(index2<0)index2 += n;
//                 result[i]=nums[index2];
//             }
//             else result[i] = 0;
//         }
//         return result;
//     }
// };