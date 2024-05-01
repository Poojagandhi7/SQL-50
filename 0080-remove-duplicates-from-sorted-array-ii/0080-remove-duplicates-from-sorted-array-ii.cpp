class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> b;
        int n = nums.size();
        int cnt = 1 ;
        int i=1;
        b.push_back(nums[0]);
        
        while(i<n){
            if(nums[i-1]==nums[i]){
                cnt++;
                
            }
            else{
                cnt = 1;
            }
            if(cnt<=2){
                b.push_back(nums[i]);
            }
            i++;
            
        }
        nums = b;
        
        return b.size();
    }
};