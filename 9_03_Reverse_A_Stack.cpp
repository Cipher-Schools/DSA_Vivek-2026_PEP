
// Recursive solution
class Solution {
  public:
    void pushAtBottom(stack<int>& s, int value){
        if(s.empty()){
            s.push(value);
            return;
        }    
        int current_value = s.top();
        s.pop();
        pushAtBottom(s, value);
        s.push(current_value);
    }
    
    void reverseStack(stack<int> &s) {
        if(s.empty())
            return;
        int value = s.top();
        s.pop();
        reverseStack(s);
        pushAtBottom(s, value);
    }
};

// without recusion
class Solution {
  public:
    void reverseStack(stack<int> &s) {
        // code here
        vector<int> v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        for(int i=0; i<v.size(); i++){
            s.push(v[i]);   
        }
    }
};