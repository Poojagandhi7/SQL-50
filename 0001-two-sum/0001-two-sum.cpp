class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> b;
        int n =nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    b.push_back(i);
                    b.push_back(j);
                }
            }
        }
        return b;
    }
    
};

// class Solution:
//     def twoSum(self, nums: List[int], target: int) -> List[int]:
//         result = []
//         for i in range(0,len(nums)):
//             for j in range(i+1,len(nums)):
//                 if(nums[i]+nums[j]==target):
//                     result.append(i)
//                     result.append(j)
//         return result          
                 
