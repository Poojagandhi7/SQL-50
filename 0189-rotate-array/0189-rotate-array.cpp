class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> b;
        int n = nums.size();
        
        if(n==1){
            cout << nums[0];
        }
        if(k>n){
            k = k % n;
        }
        for(int i=n-k;i<n;i++){
            b.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            b.push_back(nums[i]);
        }
        nums=b;
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<int> reverse;
//         int n = nums.size();
//         if(n==1){
//             cout<<nums[0];
//         }
        
//         if(k>n){
//             k = k%n;
//         }
        
//         for(int i=n-k;i<n;i++){
//             reverse.push_back(nums[i]);
//         }
        
//         for(int i=0;i<n-k;i++){
//             reverse.push_back(nums[i]);
//         }
//         nums = reverse;
//         for(int i=0;i<n;i++){
//             cout<<nums[i];
//         }
        
    }
};
