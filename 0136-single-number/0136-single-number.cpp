class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        int single;
        if(n==1){
            return nums[0];
        }
    // ----------OPTIMAL-------(XOR)----------//
    int XOR=0;
    for(int i=0;i<n;i++){
        
        XOR = XOR ^ nums[i];
    }
    return XOR;

        

    // -----------BETTER-------(MAP)--------------//


        // unordered_map<int,int> a;

        // for(int i=0;i<n;i++){
        //     a[nums[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(a[nums[i]]==1){
        //         return nums[i];
        //     }
        // }
        // return -1;
    
    // -----------BRUTE FORCE -------------//
        // int single;
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==num){
        //             count+=1;
        //         }
        //     }
        //     if(count==1){
        //         single = nums[i];
        //     }
        // }
        // return single;
        
    }
};