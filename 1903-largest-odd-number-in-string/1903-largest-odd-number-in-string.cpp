class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if(num[i] % 2 != 0){
                return num.substr(0,i+1);
            }
        }
        return "";
        
    }
};


// for(int i = 0; i < num.length() - 1; i++) {
//             for(int j = 0; j < num.length() - 1; j++) {
//                 if(num[j] > num[j + 1]) {
//                     char temp = num[j];
//                     num[j] = num[j + 1];
//                     num[j + 1] = temp;
//                 }
//             }
//         }
        
//         string ans = "";
        
//         for(int i=num.length()-1;i>=0;i--){
//             if(num[i]%2 != 0){
//                 ans += num[i];
//             }
//         }
        
//         return ans;