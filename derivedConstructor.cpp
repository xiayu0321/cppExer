#include<iostream>
#include<cstring>

using namespace std;

class Student{
    protected:
        int number;
        string name;
        float score;
    public:
        Student(int number1,string name1,float score1){
            number = number1;
            name = name1;
            score = score1;
        }
        void print(){
            cout<<"number:"<<number<<endl;
            cout<<"name:"<<name<<endl;
            cout<<"score:"<<score<<endl;
        }
};

class UStudent:public Student{
    private:
        string major;
    public:
        UStudent(int number1,string name1,float score1,string major1):Student(number1,name1,score1){
            major = major1;
        }
        void print1(){
            print();
            cout<<"major:"<<major<<endl;
        }
};

int main(){
    UStudent stu(21312,"xiayu",78,"computer");
    stu.print1();

    return 0;
}
