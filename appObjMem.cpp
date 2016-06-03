#include<iostream>
#include<cstring>

using namespace std;

class Score{
    private:
        float computer;
        float english;
        float math;
    public:
        Score(float c = 0,float e = 0,float m = 0);
        void show();
};

Score::Score(float c,float e,float m){
    computer = c;
    english = e;
    math = m;
}

void Score::show(){
    cout<<"\n计算机成绩:"<<computer;
    cout<<"\n英语成绩:"<<english;
    cout<<"\n数学成绩:"<<math;
}

class Student{
    private:
        char *name;
        char *stu_no;
        Score score1;
    public:
        Student(char *name1,char *stu_no1,float s1,float s2,float s3);
        ~Student();
        void show();
};

Student::Student(char *name1,char *stu_no1,float s1,float s2,float s3):score1(s1,s2,s3){
    name = new char[strlen(name1)+1];
    strcpy(name,name1);
    stu_no = new char[strlen(stu_no1)+1];
    strcpy(stu_no,stu_no1);
}

Student::~Student(){
    delete []name;
    delete []stu_no;
}

void Student::show(){
    cout<<"\n姓名:"<<name;
    cout<<"\n学号:"<<stu_no;
    score1.show();
}

int main(){
    Student s1("yoonalim","03124321",75,86,90);
    s1.show();
    cout<<endl;

    Student s2("deerlu","04130932",87,79,93);
    s2.show();
    return 0;
}
