#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    char c = s[i];
                    if(st.top()=='(' && c==')' ||
                       st.top()=='[' && c==']' || 
                       st.top()=='{' && c=='}')
                    {
                        st.pop();
                    }
                    else{
                    return false;
                    }
                    }
                
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};




















// stack<char> st;
//         int n = s.length();
        
//         for(int i=0;i<n;i++){
//             if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
//                 st.push(s[i]);
//             }
//             else{
//                 if(st.empty()){
//                     return false;
//                 }
//                 else{
//                     char c = st.top();
//                     st.pop();
//                     if((c == '(' && s[i]==')') ||
//                        (c == '[' && s[i]==']') ||
//                        (c == '{' && s[i]=='}')){
//                         continue;
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//             }
//         }
//         if(st.empty()){
//             return true;
//         }
//         return false;