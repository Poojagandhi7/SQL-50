class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=i;
        }
        int total = sum + n;

        int arraysum=0;

        for(int i=0;i<n;i++){
            arraysum += nums[i];
        }
        int missing=total-arraysum;
        return missing;
        
        // for(int i=1;i<=n;i++){
        //     int flag=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==i){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     int count=0;
        //     if(flag==0){
        //         count =i;
        //     }
        // }
        // return count;
        
    }
    
};