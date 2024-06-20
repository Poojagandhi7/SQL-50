class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> mpp;
        int i=0,j=0;
        int count=0 , n = s.length();

        while(j<n){
            mpp[s[j]]++;

            while(mpp['a'] && mpp['b'] && mpp['c']){
                count = count + (n-j);
                mpp[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
    }
};