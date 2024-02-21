class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        int j=n-1;
        int idx1=0,idx2=0;
        int flag = 0 , flags=0;
        
        
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                flag=1;
                idx1=i;
            }
        }
        
        for(j=n-1;j>=0;j--){
            if(nums[j]==target){
                flags=1;
                idx2=j;
            }
            
        }
            
        if(flag==0){
            idx1=-1;
        }
        if(flags==0){
            idx2=-1;
        }
        return {idx2,idx1};
        
        
    }
};