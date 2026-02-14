// class Solution {
// public:
//     long long rob(vector<int>& nums, vector<int>& colors){
//         int n= nums.size();
//         if(n==1)return nums[0];
//         long long a = nums[0];
//         long long b ;
//         if(colors[1]==colors[0]) b = max((long long)nums[0],(long long)nums[1]);
//         else b = nums[0]+nums[1];
        
//         for(long long i=2;i<n;i++){
//             long long x;
//             if(colors[i]==colors[i-1]) x = max(b,a+nums[i]);
//             else x = b+nums[i];
//             a =b;
//             b=x;
//         }
//         return b;
//     }
// };