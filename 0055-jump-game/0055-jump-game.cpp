class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxjumb = 0 , jump = 0;
        int n = nums.size();
        int i = 0 ;
        
        if(n==1){
            return true;
        }
        int maxidx = nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i]>=maxidx){
                maxidx=nums[i];
            }
            else{
                maxidx--;
            }
            if(maxidx==0 ){
                return false;
            }
        }
        return true;
        
//         while( i < n ){
//             if(nums[i]==0 &&  i!= n-1){
//                 return false;
//             }
//             int store = i + nums[i];
//             if(store >= n-1){
//                 return true;
//             }
//             else if(nums[i]==1){
//                 i = i+ 1;
//             }

//             // maxjumb = 0;
//             maxjumb = 0 ,jump = i+1;
//             for(int j=i+1;j<=store;j++){
//                 if(j + nums[j]>maxjumb){
//                    maxjumb = nums[j] + j;
//                    jump = j;
//                 }
//             }
//             i = jump;
            
//         }
//         return true;
    }
};