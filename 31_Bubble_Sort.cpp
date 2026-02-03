// //  Bubble sort 
// // phase 1
// [2, 5, 1, 7, 51, 3]
// [2, 5, 1, 7, 51, 3]
// [2, 1, 5, 7, 51, 3]
// [2, 1, 5, 7, 51, 3]
// [2, 1, 5, 7, 51, 3]
// [2, 1, 5, 7, 3, 51]
// //phase 2
// [1, 2, 5, 7, 3, 51]
// [1, 2, 5, 7, 3, 51]
// [1, 2, 5, 7, 3, 51]
// [1, 2, 5, 3, 7, 51]

// outer loop is running n-1 times  
// for first it of outer loop n-1 ops
// for second it of outer loop n-2 ops
// for second it of outer loop n-3 ops

// 1,2,3,...n-1

// Sn = n/2(a+an)
// sn = (n-1)*(1+n-1)/2
// sn = (n-1)*(n)/2
// sn = n^2

// [2, 5, 1, 7, 51, 3]
// i = 0 (j=0 to j<n-0-1)
// i = 1 (j=0 to j<n-2)
// i = 2 (j=0 to j<n-3)

// Bubble sort

# include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main(){
    int n;
    cin >> n; 
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bubble_sort(a, n);
    for(int i=0; i<n; i++)
        cout << a[i] << "\n";
}
