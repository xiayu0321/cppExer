#include<iostream>
#include<cstring>

using namespace std;

class Girl;

class Boy{
    private:
        char *name;
        int age;
    public:
        Boy(char *n,int d){
            name = new char[strlen(n)+1];
            strcpy(name,n);
            age = d;
        }
        void disp(Girl &);
        ~Boy(){
            delete name;
        }
};

class Girl{
    private:
        char *name;
        int age;
    public:
        Girl(char *n,int d){
            name = new char[strlen(n)+1];
            strcpy(name,n);
            age = d;
        }
        friend void Boy::disp(Girl &);
        ~Girl(){
            delete name;
        }
};

void Boy::disp(Girl &x){
    cout<<"男生的姓名:"<<name<<",年龄为:"<<age<<endl;
    cout<<"女生的姓名:"<<x.name<<",年龄为:"<<x.age<<endl;
}

int main(){
    Boy b1("xiaoming",14);
    Girl g1("tiffany",26);

    b1.disp(g1);

    return 0;
}
