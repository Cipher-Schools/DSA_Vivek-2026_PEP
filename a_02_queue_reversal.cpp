// https://www.geeksforgeeks.org/problems/queue-reversal/1

class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        if(q.empty())
            return;
        int value = q.front();
        q.pop();
        reverseQueue(q);
        q.push(value);
        
    }
};