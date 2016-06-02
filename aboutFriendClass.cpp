#include<iostream>
#include<cstring>

using namespace std;

class Girl;

class Boy{
    private:
        char *name;
        int age;
    public:
        Boy(char *n, int d){
            name = new char[strlen(n)+1];
            strcpy(name,n);
            age = d;
        }

        void disp1(Girl &);
        void disp2(Girl &);
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
        friend Boy;

        ~Girl(){
            delete name;
        }
};

void Boy::disp1(Girl &x){
    cout<<"男生的姓名为:"<<name<<",女生姓名为:"<<x.name<<endl;
}

void Boy::disp2(Girl &x){
    cout<<"男生年龄为:"<<age<<",女生年龄为:"<<x.age<<endl;
}

int main(){
    Boy b("liangliang",5);
    Girl g("seohyun",25);

    b.disp1(g);
    b.disp2(g);

    return 0;
}

