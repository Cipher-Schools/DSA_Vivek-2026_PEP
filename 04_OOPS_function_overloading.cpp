class Overloading{
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    double add(double a, double b){
        return a+b;
    }
    double add(double a, double b, double c){
        return a+b+c;
    }

}

int main(){
    Overloading a();     
    a.add(5, 6);
    a.add(5, 6, 3);
    double element1 = 7.65;
    double element2 = 27.615;
    a.add(element1, element2);
}

