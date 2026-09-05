class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }
        string ss = filtered;
        reverse(ss.begin(), ss.end());
        return filtered == ss;
    }
};