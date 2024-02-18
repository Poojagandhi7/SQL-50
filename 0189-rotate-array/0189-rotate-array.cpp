class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k=k%n;
    vector<int> reverse;
    vector<int> rotate;
    for(int i=n-k;i<n;i++){
        reverse.push_back(nums[i]);
    }
    for(int i=0;i<n-k;i++){
        reverse.push_back(nums[i]);
    }
    nums=reverse;
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }

    }
};