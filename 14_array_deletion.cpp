# include<bits/stdc++.h>
using namespace std;

int deletion(int *arr, int pos, int n){
    if(pos>=n)
        return -1;
    int value_deleted =arr[pos];
    for(int i=pos; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
    return value_deleted;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    cout << deletion(arr, 3, n) << "\n";
    n--;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n"; 

}