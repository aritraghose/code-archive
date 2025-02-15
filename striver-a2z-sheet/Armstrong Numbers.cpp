
// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1



class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int x = n, y = 0;
        
        while (x > 0) {
            int a = x%10;
            y +=  (a*a*a);
            x /= 10;
        }
        return (n == y);
        
    }
};