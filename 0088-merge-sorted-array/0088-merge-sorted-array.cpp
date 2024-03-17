class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> ans;
        int i=0,j=0;
        
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                // j++;
            }
            else{
                ans.push_back(nums2[j]);
                // i++;
                j++;
            }
        }
        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        
        
        for(int k=0;k< m + n;k++){
            nums1[k] = ans[k];
        }
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
    }
};

// while (i<n1 && j <n2)
//     {
//         // Check if current element of first
//         // array is smaller than current element
//         // of second array. If yes, store first
//         // array element and increment first array
//         // index. Otherwise do same with second array
//         if (arr1[i] < arr2[j])
//             arr3[k++] = arr1[i++];
//         else
//             arr3[k++] = arr2[j++];
//     }
 
//     // Store remaining elements of first array
//     while (i < n1)
//         arr3[k++] = arr1[i++];
 
//     // Store remaining elements of second array
//     while (j < n2)
//         arr3[k++] = arr2[j++];
// }