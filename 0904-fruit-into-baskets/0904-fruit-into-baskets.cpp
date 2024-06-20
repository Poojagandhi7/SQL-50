class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        int n = fruits.size();
        map<int,int> mpp;
        int maxlen=0;
        
        while(j<n){
            mpp[fruits[j]]++;
            
            if(mpp.size()<=2){
                maxlen = max(maxlen,j-i+1);
            }
            
            while(mpp.size()>2){
                    mpp[fruits[i]]--;
                    
                    if(mpp[fruits[i]]==0){
                        mpp.erase(fruits[i]);
                    }
                    i++;    
            }
            j++;
        }
        return maxlen;
        
    }
};