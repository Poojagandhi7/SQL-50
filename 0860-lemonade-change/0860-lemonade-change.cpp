class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int n = bills.size();
        int five = 0;
        int ten = 0;
        int twenty = 0;
        
        
        for(int i=0;i<n;i++){
            
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                ten++;
                if (five == 0) {
                    return false; // Cannot give change
                }
                if(five>0){
                    five--;
                }
            }
            
            else if(bills[i]==20){
                twenty++;
                if (five == 0) {
                    return false; // Cannot give change
                }
                else if(five>0 && ten>0){
                    five--;
                    ten--;
                }
                else if(five>=3){
                    five = five - 3;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
                                    

    }
};


















// int five = 0 , ten=0 , twenty=0;
//         int n = bills.size();
        

//         for(int i=0;i<n;i++){
//             if(bills[i]==5){
//                 five++;
//             }
//             else if(bills[i]==10){
//                 ten++;
//                 if (five == 0) {
//                     return false; // Cannot give change
//                 }
//                 if(five>0){
//                     five--;
//                 }
//             }
//             else if(bills[i]==20){
//                 twenty++;
//                 if (ten > 0 && five > 0) {
//                     ten--;
//                     five--;
//                 } else if (five >= 3) {
//                     five -= 3;
//                 } else {
//                     return false; // Cannot give change
//                 }
//             }
//         }
        
//         return true;