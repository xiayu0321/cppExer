#include<iostream>
#include<cstring>

using namespace std;

class Student{
    private:
        char *name;
        char *stu_no;
        float score;
        static int count;
        static float sum;
        static float ave;

    public:
        Student(char *name1,char *stu_no1,float score1);
        ~Student();
        void show();
        void show_count_sum_ave();
};

Student::Student(char *name1,char *stu_no1,float score1){
    name = new char[strlen(name1)+1];
    strcpy(name,name1);

    stu_no = new char[strlen(stu_no1)+1];
    strcpy(stu_no,stu_no1);

    score = score1;

    ++count;
    sum+=score;
    ave = sum / count;
}

Student::~Student(){
    delete []name;
    delete []stu_no;
    --count;
    sum-=score;
}

void Student::show(){
    cout<<"\n 姓名:"<<name;
    cout<<"\n 学号:"<<stu_no;
    cout<<"\n 成绩:"<<score;
}

void Student::show_count_sum_ave(){
    cout<<"\n学生人数:"<<count;
    cout<<"\n平均人数:"<<ave;
}

int Student::count = 0;
float Student::sum = 0.0;
float Student::ave = 0.0;

int main(){
    Student s1("xiaoyu","04141266",92);
    s1.show();
    s1.show_count_sum_ave();
    cout<<endl;
    cout<<"---------------------\n";

    Student s2("xinxin","04141257",98);
    s2.show();
    s2.show_count_sum_ave();
    cout<<endl;

    return 0;
}
