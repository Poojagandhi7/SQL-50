class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int n = asteroids.size();
        int sum=0;
        stack<int> st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                sum = st.top() + asteroids[i];
                if(sum<0){
                    st.pop();
                }
                else if(sum>0){
                    asteroids[i]=0;
                }
                else{
                    asteroids[i]=0;
                    st.pop();
                }
            }
            if(asteroids[i]!=0){
                st.push(asteroids[i]);
            }
        }
        
        int s = st.size();
        vector<int> result(s);
        int i = s-1;
        while(!st.empty()){
            result[i] = st.top();
            st.pop();
            i--;
        }
        return result;
    }
};