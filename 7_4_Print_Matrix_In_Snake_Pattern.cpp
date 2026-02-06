//https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        // int n = matrix.size();
        // vector<int> ans(n*n);
        vector<int> ans;
        // int k = 0;
        for(int i=0; i<matrix.size(); i++){
            if(i%2==0){
                for(int j=0; j<matrix[i].size(); j++){
                    ans.push_back(matrix[i][j]);
                    // ans[k++] = matrix[i][j];
                }                
            }
            else{
                for(int j=matrix[i].size()-1; j>=0; j--){
                    ans.push_back(matrix[i][j]);  
                    // ans[k++] = matrix[i][j];
                }   
            }
        }
        return ans;
    }
};


// O(N^2)