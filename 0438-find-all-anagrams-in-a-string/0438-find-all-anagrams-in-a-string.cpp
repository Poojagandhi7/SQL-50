class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length() > s.length()){
            return {};
        }
        int size = s.length();
        int k = p.length();        
        unordered_map<char,int> mpp;
        unordered_map<char,int> pp;
        
        vector<int> res;
        
        for(int h=0;h<k;h++){
            pp[p[h]]++;
        }
        
        int i=0,j=0;
        while(j<size){
            mpp[s[j]]++;
            
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 ==k){
            if(mpp == pp){
                res.push_back(i);
            }
            mpp[s[i]]--; 
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]); 
            }
            i++;
            j++;
            }
        }
        
        return res;
    }
};