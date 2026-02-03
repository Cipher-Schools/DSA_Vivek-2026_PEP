# include<bits/stdc++.h>
using namespace std;

class Array{
    private:
        int *arr;

    public:
        Array(int size){
            arr = new int[size];
            for(int i=0; i<size; i++)
                arr[i] = i+1;
        }
        ~ Array(){
            delete[] arr;
        }

        void print(int size){
            for(int i=0; i<size; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
};

int main(){
    Array arr_obj(5);
    arr_obj.print(5);
    return 0;
}