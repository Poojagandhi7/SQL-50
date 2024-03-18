class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length();
        int count=0;
        int i=0 ,k=0,h=0;
        int start = 0;
        
        while(i<n){
            if(s[i]==' '){
                start = i;
                i++;
            }
            else{break;}
        }
        
        int end = n;
        int j = n-1;
        while(j>0){
            if(s[j]==' '){
                end = j;
                j--;
            }
            else{
                break;
            }
        }
        // return end;
        // int j = n;
        // while(j>0 && s[j] == ' '){
        //     j--;
        // }
        int lastspace = -1;
        
        for(int i=start;i<end;i++){
            if(s[i]==' '){
                lastspace = i;
            }
        }
        
        for(int k=lastspace+1;k<end;k++){
            count++;
        }
        return count;
    }
};