class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.length();
        
        for(int i=0;i<n;i++){
            
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            
//             if(st.size() == 1 && num[i] == '0'){
//                 st.pop();
//             }
            
            st.push(num[i]);
            
        }
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        string res = "";
        int s = st.size();
        while(!st.empty()){
            res += st.top();
            st.pop();
            
        }
        
        while(!res.empty() && res.back() == '0')
            res.pop_back();
        
        // Reverse the result string
        reverse(res.begin(), res.end());
        
        if(res==""){
            return "0";
        }
        return res;
        
    }
};