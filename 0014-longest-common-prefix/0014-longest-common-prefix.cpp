class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last =strs[strs.size()-1];
        int idx=0;
        
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<first.size() && i<last.size();i++){
            if (first[i]==last[i]){
                idx++;
            }
            else{
                break;
            }
        }
        
        return first.substr(0,idx);
        
        
    }
};