class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int open = 0;
        int n = s.size();
        int j=0;
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                open++;
            }
            
            else{
                open--;
                if(open==0){
                    for(int k=j+1;k<i;k++){
                        ans += s[k];
                    }
                    j = i+1;
                }
                
            }
            
        }
        return ans;
        
        
        
        
    }
};























// string ans = "";
//         int open = 0;
//         int i = 0;
//         for(int j=0;j<s.length();j++){
            
//             if(s[j]=='('){
//                 open++;
//             }
            
//             else{
            
//                 open--;
//                 if(open==0){
//                     for(int k=i+1;k<j;k++){
//                         ans += s[k];
//                     }
//                     i = j+1;
//                 }
                
//             }
//         }
//         return ans;