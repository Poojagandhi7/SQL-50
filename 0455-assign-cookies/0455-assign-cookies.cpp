class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int n = g.size();
        int m = s.size();
        int i=0,j=0,count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        while(i<n && j<m){
            if(g[i]<=s[j]){
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
        }
        return count;
        
    }

};



















// sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int n = g.size();
//         int m = s.size();
//         int count=0 ,i=0,j=0;

//         while(i<n && j<m){
//                 if(s[j]>=g[i]){
//                 count++;
//                 i++;
//                 }
//             j++;
//         }
//         return count;