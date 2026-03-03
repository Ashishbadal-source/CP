// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         int maxi = *max_element(candies.begin(),candies.end());
//         vector<bool> arr;
//         for(int i=0;i<candies.size();i++){
//             if(candies[i]+extraCandies >= maxi)arr.push_back(true);
//             else arr.push_back(false);
//         }
//         return arr;
//     }
// };





// class Solution {
// public:
//     vector<int> leftRightDifference(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>leftsum;
//         vector<int>rightsum;
//         vector<int>ans;
//         int sum1 =0;
//         int sum2=0;
//         for(int i=0;i<n;i++){
//             leftsum.push_back(sum1);
//             sum1 += nums[i];
//         }
//         for(int i=0;i<n;i++){
//             rightsum.push_back(sum2);
//             sum2 += nums[n-i-1];
//         }

//         for(int i=0;i<n;i++){
//             ans.push_back(abs(leftsum[i]-rightsum[n-1-i]));
//         }
//         return ans;
//     }
// };






// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int>x;
//         vector<int>y;
//         vector<int>ans;
//         for(int i = 0 ;i<n;i++)x.push_back(nums[i]);
//         for(int i = n ;i<2*n;i++)y.push_back(nums[i]);

//         for(int i=0;i<n;i++){
//             ans.push_back(x[i]);
//             ans.push_back(y[i]);
//         }
//         return ans;
//     }
// };
