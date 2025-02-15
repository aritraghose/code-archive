// https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/


class Solution {
  public:
    // Complete this function
    void printNos(int n) {
        // Your code here
        if (n <= 0) return;
        printNos(n-1);
        cout << n << " ";
        
        
    }
};