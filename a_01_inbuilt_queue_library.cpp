# include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        q.push(value);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";   
}

