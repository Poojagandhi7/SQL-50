class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> b;
        vector<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                a.push_back(nums[i]);
            }
            else if(nums[i]==0){
                b.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        nums=a;
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
    }
};