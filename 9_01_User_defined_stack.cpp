# include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int capacity;
        vector<int> v;
        int li = -1;
    public:
        Stack(int cap){
            this->capacity = cap;
            v.resize(cap);
        }

        int size(){
            return (this->li+1);
        }

        bool isFull(){
            return (this->capacity-1==li);
            // if(this->capacity-1==top)
            //     return true;
            // return false;
        }

        bool isEmpty(){
            return(this->li==-1);
        }

        void push(int value){
            if(this->capacity-1==li)
                return; 
            this->v[++li] = value;
        }

        int top(){
            if(isEmpty()){
                cout << "Stack is empty invalid demand\n";
                return -1;
            }
            return this->v[li];
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack is empty invalid demand\n";
            }
            this->li--;
        }

};

int main(){
    Stack* s = new Stack(100);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        s->push(value);
    }
    cout << s->size() << " is size \n";
    cout << s->top() << " is the top \n";
    s->pop();
    cout << s->size() << " is size \n";
    
}
