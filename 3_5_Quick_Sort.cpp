# include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int left, int right){
    int pi = left;
    while(left<right){
        if(v[left]<v[right]){
            swap(v[left], v[pi]);
            pi++;
        }
        left++;
    }
    swap(v[right], v[pi]);
    return pi;
}

void quickSort(vector<int>& v, int left, int right){
    if(left>=right)
        return;
    int pi = partition(v, left, right);
    quickSort(v, left, pi-1);
    quickSort(v, pi+1, right);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    quickSort(v, 0, n-1);

    for(int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << "\n";
}