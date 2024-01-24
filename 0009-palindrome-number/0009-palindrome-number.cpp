class Solution {
public:
    bool isPalindrome(int n) {
        int rev = 0;
        int num = n;
        while(n>0){
            int ld = n % 10;
            n = n/10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7)) {
                return 0; // Overflow, return 0
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8)) {
                return 0; // Overflow, return 0
            }
            rev = rev*10 + ld;
    }
        return num == rev;
    }
};