// https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(); 
        // column tracking --> matrix[0][j]  and col0
        // row tracking --> matrix[i][0]
        int col0 = 1; 

        // marking 
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == 0) {
                    // row marking
                    matrix[i][0] = 0;
                    // column marking
                    if (j==0) col0 = 0;
                    else matrix[0][j] = 0;
                }
            }
        }
        
        // middle elements
        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }

        // apply on the first row first
        if (matrix[0][0] == 0) {
            for (int j=1; j<n; j++) matrix[0][j] = 0;
        }

        // then on first column
        if (col0 == 0) {
            for (int i=0; i<m; i++) matrix[i][0] = 0;
        }

    }
};