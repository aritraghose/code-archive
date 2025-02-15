// https://leetcode.com/problems/valid-palindrome/


class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i < j) {
            int x = s[i], y = s[j];
            if ((x >= 65) && (x <= 90)) {
                x += 32;
            }
            if ((y >= 65) && (y <= 90)) {
                y += 32;
            }
            if (((x < 97) || (x > 122)) && (!((x >= 48) && (x <= 57)))) {
                i++;
            } else if (((y < 97) || (y > 122)) && (!((y >= 48) && (y <= 57)))) {
                j--;
            } else if (x != y) {
                return false;
            } else {
                i++;
                j--;
            }
            
        }
        return true;
    }
};