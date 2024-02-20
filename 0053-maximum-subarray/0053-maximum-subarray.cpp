class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0 , min = INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            min = max(sum,min);
            if(sum<0){
                sum=0;
            }
            // return nums[i];
        }
        return min;
    }
};