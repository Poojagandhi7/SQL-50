class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> reverse;
        int n = nums.size();
        if(n==1){
            cout<<nums[0];
        }
        
        if(k>n){
            k = k%n;
        }
        
        for(int i=n-k;i<n;i++){
            reverse.push_back(nums[i]);
        }
        
        for(int i=0;i<n-k;i++){
            reverse.push_back(nums[i]);
        }
        nums = reverse;
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
        
    }
};






























// int n = nums.size();
//         vector<int> reverse;
        
       
//         if(n==1){
//             for(int i=0;i<n;i++){
//             cout << nums[i];
//             }
//         }
//         if(k>n){
//             k = k % n;
//         }
        
//         for(int i=n-k;i<n;i++){
//             reverse.push_back(nums[i]);
//         }
//         for(int i=0;i<n-k;i++){
//             reverse.push_back(nums[i]);
//         }
//         nums = reverse;
//         for(int i=0;i<reverse.size();i++){
//             cout << nums[i];
//         }