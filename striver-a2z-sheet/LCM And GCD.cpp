
// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1


class Solution {
  public:
    int findGcd(int a, int b) {
        while (a > 0 && b > 0) {
            if (a > b) {
                a %= b;
            } else {
                b %= a;
            }
        }
        if (a) return a;
        else return b;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector<int> arr;
        int gcd = findGcd(a, b);
        int lcm = (a*b)/gcd;
        arr.push_back(lcm);
        arr.push_back(gcd);
        return arr;
        
    }
};