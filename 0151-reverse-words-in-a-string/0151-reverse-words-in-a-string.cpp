class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;
        string str="";
        string ans = "";
        
        for(int i=0;i<s.length();i++){
        
            if(s[i]==' '){
                if(!str.empty()){
                    st.push(str);
                    str="";
                }
            }
            else{
            str+=s[i];
            }
        }
        if (!str.empty()) {
            st.push(str);
        }
        while(st.size()!=1){
            ans += st.top()+" ";
            st.pop();
        }
        ans += st.top();
        
        
        return ans;
//         string reverse = "";
        
//         // char words = s.split();
        
//         string word = ""; 

//         for (char c : s) {
//             if (c == ' ') {
//                 cout << word << endl;
//                 word = ""; 
//             } else {
//                 word += c;
//             }
//         }
//         string orginal = "";
//         for(int i=0;i<word.length();i++){
//             orginal += word[i];
//         }
        
//         // for word in words{
//         for(int i=orginal.length();i>0;i--){
//             reverse += orginal[i];
//         }
//         // }
//         return reverse;
    }
};