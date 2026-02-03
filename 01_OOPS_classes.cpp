# include<bits/stdc++.h>
using namespace std;

class Arithmetic{
    private: 
        int a, b;
    public:
        Arithmetic(int a, int b){
            this->a = a;
            this->b = b;
        }
        int add(){
            return (this->a)+(this->b);
        }
        int subtract(){
            return (this->a)-(this->b);
        }
        int multiply(){
            return (this->a)*(this->b);
        }
        int divide(){
            return (this->a)/(this->b);
        }
};

int main(){
    Arithmetic a(24, 6);
    cout << a.add() << "\n";
    cout << a.subtract() << "\n";
    cout << a.multiply() << "\n";
    cout << a.divide() << "\n";
}