class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        int low = 0;
        int high = n-1;
        
        while(low<high){
            int mid = (low+high)/2;
            
            if(nums[mid]<nums[mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
        
    }
};























// if(n==1){
//             return 0;
//         }
        
//         for (int i = 0; i < n; i++) {
//             if ((i == 0 || nums[i] > nums[i - 1]) && (i == n - 1 || nums[i] > nums[i + 1])) {
//                 return i;
//             }
//         }
//         return -1;