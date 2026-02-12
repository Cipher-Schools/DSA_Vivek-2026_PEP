# include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        s.push(value);
    }
    cout << "The size of the stack is " << s.size() << "\n";
    cout << "the values for the stack are ";
    while(s.size()!=0){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "stack is empty or not " << s.empty() << "\n";

}