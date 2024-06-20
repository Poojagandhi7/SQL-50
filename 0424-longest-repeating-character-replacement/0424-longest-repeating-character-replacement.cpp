class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int> mpp;
        int i=0,j=0;
        int n = s.length();
        int maxx=0,maxlen=0,changes=0;
        
        
        while(j<n){
            
            mpp[s[j]]++;
            
            maxlen=max(maxlen,mpp[s[j]]);
            
            changes = (j-i+1)-maxlen;
            
            if(changes<=k){
                maxx = max(maxx,j-i+1);
            }
            else{
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
        return maxx;
        

    }
};



















// int maxlen=0;
//         int maxx=0;

//         while(j<n){
//             mpp[s[j]]++;

//             maxlen = max(maxlen,mpp[s[j]]);
//             int changes = (j-i+1) - maxlen;
//             if(changes<=k){
//                 maxx= max(maxx,j-i+1);
//             }
//             else{
//                 mpp[s[i]]--;
//                 if(mpp[s[i]]==0){
//                     mpp.erase(s[i]);
//                 }
//                 i++;
//             }
//             j++;
//         }
//         return maxx;