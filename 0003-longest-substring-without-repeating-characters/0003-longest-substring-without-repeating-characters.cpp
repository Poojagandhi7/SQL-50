class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char,int> mpp;
        
        int i=0;
        int j = 0;
        
        int min = 0;
        
        for(j=0;j<n;j++){
            mpp[s[j]]++;
            
            
            while(mpp.size()<j-i+1){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            if(mpp.size()==j-i+1){
                min = max(min,j-i+1);
            }
            
        }
        
        return min;
        
    }
};






















// map<char,int> mpp;
//     int min = 0;
//     int i=0,j=0;

//     for(int j = 0 ; j<n ; j++){
//         mpp[s[j]]++;
        
        
//         while(mpp.size() < j-i+1){
//                 mpp[s[i]]--;
//                 if (mpp[s[i]] == 0) {
//                   mpp.erase(s[i]);
//                 }
//                 i++;
//             }
        

//         if(mpp.size()==j-i+1){
//             min=max(min,j-i+1);
//         }
        
//     }
    
//     return min;