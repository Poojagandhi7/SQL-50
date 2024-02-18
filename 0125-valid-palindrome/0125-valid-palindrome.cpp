class Solution {
public:
    bool isPalindrome(string s) {

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return ispunct(c) || isspace(c);
        }), s.end());
        int start = 0;
        int end = s.size() - 1;
        
        while (start <= end) {
    
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    }
        
};