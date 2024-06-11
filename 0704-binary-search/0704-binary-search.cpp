class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        // if(n==1){
        //     return -1;
        // }
        
        int low = 0;
        int high = n-1;
        
        for(int i=0;i<n;i++){
            int mid = (low + high)/2;
            
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return -1;
    }
};