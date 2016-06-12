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
        Student auditor1;
        Student auditor2;
    public:
        UStudent(int number1,string name1,float score1,int number2,string name2,float score2,int number3,string name3,float score3,string major1):
Student(number1,name1,score1),auditor2(number3,name3,score3),auditor1(number2,name2,score2){
        major = major1;
    }
        void print(){
            cout<<"正式生为:"<<endl;
            Student::print();
            cout<<"专业:"<<major<<endl;
        }
        void print_auditor1(){
            cout<<"旁听生为:"<<endl;
            auditor1.print();
        }
        void print_auditor2(){
            cout<<"旁听生为:"<<endl;
            auditor2.print();
        }
};

int main(){
    UStudent stu(2001,"yoona",95,2002,"tiffany",71,2003,"jessica",45,"信息安全");
    stu.print();

    stu.print_auditor1();
    stu.print_auditor2();

    return 0;
}


