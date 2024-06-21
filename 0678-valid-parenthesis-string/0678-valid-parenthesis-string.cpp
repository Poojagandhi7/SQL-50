class Solution {
public:
    bool checkValidString(string s) {
        stack<int> star,open;
        int n = s.length();
        int a =-1,b=-1;
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        while(!open.empty() && !star.empty()){
            int a =open.top();
            int b = star.top();
            
            if(b>a){
                open.pop();
                star.pop();
            }
            else{
                return false;
            }
        }
        return open.empty();
        
    }
};






















// int a=-1;
//         int b = -1;
        
//         for(int i=0;i<n;i++){
//             if(s[i]=='('){
//                 open.push(i);
//             }
//             else if(s[i]=='*'){
//                 star.push(i);
//             }
//             else if(s[i]==')'){
//                 if(!open.empty()){
//                     open.pop();
//                 }
//                 else if(!star.empty()){
//                     star.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//         while(!open.empty() && !star.empty()){
//             a = star.top();
//             b = open.top();
//             if(a>b){
//                     star.pop();
//                     open.pop();
//             }
//             else{
//                     return false;
//             }
//         }
//         return open.empty();