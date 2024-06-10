class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        
        for(int i=0;i<n;i++){
            int cnt = 0;
            
            for(int j=i;j<n;j++){
                if(nums[j]==1){
                    cnt++;
                    if(cnt>max){
                    max = cnt;
                    }
                }
                else{
                    break;
                }
            }
        }
        return max;
    }
};
























// int cnt=0;
//         int max = 0;
        
//         int n = nums.size();
        
//         for(int i=0;i<n;i++){
//             if(nums[i]==1){
//                 cnt++;
//                 if(cnt>=max){
//                     max=cnt;
//                 }
//             }
//             else{
//                 cnt=0;
//             }
//         }
//         return max;