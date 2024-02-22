class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        if(n==1){
            return nums[0];
        }
        
        if(nums[n-2] != nums[n-1]){
            return nums[n-1];
        }
        
        for(int i=0;i<n-1;i=i+2){
            // count = 0;
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};