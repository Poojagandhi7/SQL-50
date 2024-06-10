class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};
























// vector<int> ans;
//         ans.push_back(nums[0]);
        
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]!=nums[i-1]){
//                 ans.push_back(nums[i]);
//             }
//         }
//         nums=ans;
//         return ans.size();
        
//         int index = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i - 1]){
//                 nums[index] = nums[i];
//                 index++;
//             }
//         }
//         return index;
        
// //         ----------------------------------------------------
        
//         vector<int> b;
//         b.push_back(nums[0]);
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]!=nums[i-1]){
//                 b.push_back(nums[i]);
//             }
//         }
//         nums=b;
//         return nums.size();