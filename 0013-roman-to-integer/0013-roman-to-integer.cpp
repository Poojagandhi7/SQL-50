class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> mpp;
        int ans = 0;
        int n = s.length();
        
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
        
        for(int i=0;i<n;i++){
            if(mpp[s[i]]>=mpp[s[i+1]]){
                ans += mpp[s[i]];
            }
            else{
                ans -= mpp[s[i]];
            }
        }
        return ans;
        
    }
};