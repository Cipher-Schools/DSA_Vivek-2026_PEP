# include<bits/stdc++.h>
using namespace std;
// Write a code which creates a class Student_Record with marks of 5 students using an array and a function to add marks for a particular student and display marks for a particular student. By default student marks for all the 5 students should be 0.
class Student_Record{
    private:
        int marks[5];
    public:
        Student_Record(int def){
            for(int i=0; i<5; i++)
                marks[i] = def;
        }

        void add_marks(int score, int ind){
            marks[ind] = score;
        }
        int return_marks(int ind){
            return marks[ind];
        }
};

int main(){
    // ClassName object_name(arguments for the constructor)
    Student_Record dsa(60);
    // objectName.dataMember(arguments for the member if it's a method with some parameters)
    dsa.add_marks(99, 3);
    for(int i=0; i<5; i++)
        cout << dsa.return_marks(i) << " ";

}