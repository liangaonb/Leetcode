/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector(n, 0));
        int loop = n / 2;
        int count = 1;
        int offset = 1;
        int i = 0, j = 0;
        int mid = n / 2;
        int startx = 0, starty = 0;
        while(loop--){
            i = startx;
            j = starty;
            for (j; j < n-offset; j++){
                matrix[i][j] = count++;
            }
            for (i; i < n - offset; i++){
                matrix[i][j] = count++;
            }
            for (j; j > offset-1; j--){
                matrix[i][j] = count++;
            }
            for (i; i > offset - 1; i--)
            {
                matrix[i][j] = count++;
            }
            offset++;
            startx++;
            starty++;
        }
        if(n%2){
            matrix[mid][mid] = count;
        }
        return matrix;
    }
};
// @lc code=end

