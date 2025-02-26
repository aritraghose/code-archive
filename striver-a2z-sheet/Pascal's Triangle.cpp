// https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<int> generateRow(int row) {
        int ans = 1;
        vector<int> pascalRow;
        pascalRow.push_back(ans);

        for (int i=1; i<row; i++) {
            ans = ans * (row-i);
            ans = ans/i;
            pascalRow.push_back(ans);
        }

        return pascalRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        
        for (int i=1; i<=numRows; i++) {
            pascalTriangle.push_back(generateRow(i));
        }

        return pascalTriangle;
    }
};