# include<bits/stdc++.h>
using namespace std;

class Arithmetic{
    private:
        int op1, op2;
    public:
        Arithmetic(int a, int b){
            // this keyword is useful when refering the data members of the class
            this->op1 = a;
            this->op2 = b;
        }
        int add(){
            return this->op1+this->op2;
        }
};

int main(){
    Arithmetic add1(4, 6);
    Arithmetic add2(5, 8);
    add1.op1 = 7;
    cout << add1.add() << "result for first "<< "\n";
    cout << add2.add() << "result for second \n";
}

