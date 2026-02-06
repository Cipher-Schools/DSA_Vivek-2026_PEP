// https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans;
        int start_row = 0, start_col = 0, end_row=n-1, end_col=m-1;
        while(start_row<=end_row && start_col<=end_col){
            // trav start_row start to end
            int i = start_col;
            while(i<=end_col)
                ans.push_back(matrix[start_row][i++]);
            // increment start row
            start_row++;
            if(start_row>end_row) break;


            // trav end_col start to end
            i = start_row;
            while(i<=end_row)
                ans.push_back(matrix[i++][end_col]);
            // decrement end_col
            end_col--;
            if(start_col>end_col) break;
            // trav end_row end to start
            i = end_col;
            while(i>=start_col)
                ans.push_back(matrix[end_row][i--]);
            // decrement end_row
            end_row--;
            if(start_row>end_row) break;
            // trav start_col from end to start
            i = end_row;
            while(i>=start_row)
                ans.push_back(matrix[i--][start_col]);
            // increment start col
            start_col++;
            if(start_col>end_col) break;
        }
        return ans;
    }
};