#include<iostream>
#include<cstring>

using namespace std;

class Data_rec{
    protected:
        string name;
        char sex;
        int age;
    public:
        Data_rec(string name1,char sex1,int age1){
            name = name1;
            sex = sex1;
            age = age1;
        }
};

class Student:virtual public Data_rec{
    protected:
        string major;
        double score;
    public:
        Student(string name1,char sex1,int age1,string major1,double score1):Data_rec(name1,sex1,age1){
            major = major1;
            score = score1;
        }
};

class Employee:virtual public Data_rec{
    protected:
        string dept;
        double salary;
    public:
        Employee(string name1,char sex1,int age1,string dept1,double salary1):Data_rec(name1,sex1,age1){
            dept = dept1;
            salary = salary1;
        }
};

class E_Student:public Employee,public Student{
    public:
    E_Student(string name1,char sex1,int age1,string major1,double score1,string dept1,double salary1):Data_rec(name1,sex1,age1),Student(name1,sex1,age1,major1,score1),Employee(name1,sex1,age1,dept1,salary1){
    }
    void print();
};

void E_Student::print(){
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"major:"<<major<<endl;
    cout<<"score:"<<score<<endl;
    cout<<"dept:"<<dept<<endl;
    cout<<"salary:"<<salary<<endl;
}

int main(){
    E_Student my_E_Student("yoona",'f',26,"计算机科学与技术",98,"教务处",2700);
    my_E_Student.print();

    return 0;
}
