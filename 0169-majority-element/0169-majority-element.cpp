class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        int n = nums.size();
        
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(mpp[nums[i]] > n/2){
        //         return nums[i];
        //     }
        // }
        // return 0;
        
        sort(nums.begin(),nums.end());
        
        if(n==1){
            return nums[0];
        }
        
        int cnt = 0, max=0;
        int maxi=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                cnt++;
                if(cnt+1>max){
                    max = cnt+1;
                    maxi = nums[i];
                }
            }
            else{
                cnt=0;
            }
        }
        return maxi;
        
        
    }
};