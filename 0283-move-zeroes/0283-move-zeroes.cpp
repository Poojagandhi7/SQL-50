class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();
        if(n==1){
            return;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return;
        }
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};


























// vector<int> b;
//         vector<int> a;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 a.push_back(nums[i]);
//             }
//             else if(nums[i]==0){
//                 b.push_back(nums[i]);
//             }
//         }
        
//         for(int i=0;i<b.size();i++){
//             a.push_back(b[i]);
//         }
//         nums=a;
//         for(int i=0;i<n;i++){
//             cout<<nums[i];
//         }