// https://www.geeksforgeeks.org/problems/count-digits5716/1


class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int x = N, count = 0;
        while (x > 0) {
            int y = x%10;
            if (y != 0 && N%y == 0) {
                count++;
            }
            x = x/10;
        }
        return count;
    }
};