// https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, right = matrix[0].size()-1, up = 0, down = matrix.size()-1;
        vector<int> ans;

        while (left <= right && up <= down) {
            for (int i=left; i<=right; i++) {
                ans.push_back(matrix[up][i]);
            }
            up++;

            for (int i=up; i<=down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (up <= down) {
                for (int i=right; i>=left; i--) {
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            
            if (left <= right) {
                for(int i=down; i>=up; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        
        return ans;
        // l = 1, r = 2
        // u = 1, d = 1
    }
};