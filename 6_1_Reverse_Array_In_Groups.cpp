// https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        for(int i=0; i<n; i+=k){
            int start = i, end = min(i+k-1, n-1);
            while(start<end){
                swap(arr[start], arr[end]);
                start++, end--;
            }
        }      
    }
};

// n/k*(k)