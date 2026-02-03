// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution {
  public:
    
    bool isPos(vector<int> &books, int students, long long max_pages){
        students--;
        int pages_count = 0;
        for(int i=0; i<books.size(); i++){
            if(pages_count+books[i]<=max_pages){
                pages_count = pages_count+books[i];
            }
            else{
                if(books[i]>max_pages)
                    return false;
                pages_count = books[i];
                students--;        
            }
        }
        if(students>=0)
            return true;
    }
    
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size())
            return -1;
        long long l = 1, r = 1e18;
        // for(int i=0; i<arr.size(); i++)
        //     l = max(l, (long long)arr[i]);
        while(l<r){
            long long mid = l+(r-l)/2;
            if(isPos(arr, k, mid))
                r = mid;
            else
                l = mid+1;
        }
        return l;
    }
};