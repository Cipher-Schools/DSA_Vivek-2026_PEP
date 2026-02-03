#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout << "Base class\n";
        }
};

class Derived : public Base{
    public:
        void show() override{
            cout << "Derived class\n";
        }
};

int main(){
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
}