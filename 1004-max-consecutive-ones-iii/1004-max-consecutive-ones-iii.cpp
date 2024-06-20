class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i=0,j=0;
        int cnt = 0;
        int n = nums.size();
        int zeros=0;
        int maxlen = 0;
        
        while(j<n){
            
            if(nums[j]==0){
                zeros++;
            }
            
            if(zeros<=k){
                maxlen = max(maxlen,j-i+1);
            }
            while(zeros>k){
                if(nums[i]==0){
                    zeros--;
                }
                i++;
            }
            j++;
        }
        return maxlen;
    }
};





















// int zeros=0;
//         int len = 0;
//         int maxlen = 0;
//         int n = nums.size();

//         while(j<n){

//             if(nums[j]==0){
//                 zeros++;
//             }

//             while(zeros > k){
//                 if(nums[i]==0){
//                     zeros--;
//                 }
//                 i++;
//             }

//             if(zeros <= k){
//                 len = j-i+1;
//                 maxlen = max(len,maxlen);
//             }
//             j++;
//         }

//         return maxlen;