class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size(); 
        int low = 0;
        int high = n-1;
        int idx=n;
        
        while(low<=high){
            long long mid = (high+low)/2;
            
            
            if(target<=nums[mid]){
                high = mid-1;
                idx=mid;
            }
            else{
                low=mid+1;
                
            }
        }
        return idx;
    }
};