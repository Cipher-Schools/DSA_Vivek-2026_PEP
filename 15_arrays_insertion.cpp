void insertion_at_end(int *arr, int n, int pos, int value){
    if(pos>=n)
        return;
    arr[pos] = value;
}

void insertion_at_beg(int *arr, int n, int 
    value, int last_filled_cell){
    if(last_filled_cell == n-1){
        print("Array is already filled can't store anything more\n");
        return;
    }
        
    for(int i=last_filled_cell; i>=0; i--)
        arr[i+1] = arr[i];
    arr[0] = value;
}

void insertion_in_between(int *arr, int n, int 
    value, int last_filled_cell, int pos){
    if(last_filled_cell == n-1){
        print("Array is already filled can't store anything more\n");
        return;
    }
        
    for(int i=last_filled_cell; i>=pos; i--)
        arr[i+1] = arr[i];
    arr[pos] = value;
}

int main(){
    int n = 10;
    int arr[n];
    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }
    int last_filled_cell = 4;
    insertion_at_end(arr, n, 5, 20);
    insertion_at_beg(arr, n, 0, last_filled_cell);
    insertion_in_between(arr, n, 0, last_filled_cell, pos);
}

