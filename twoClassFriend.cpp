#include<iostream>
#include<cstring>

using namespace std;

class Boy;

class Girl{
    private:
        char name[23];
        int age;

    public:
        Girl(char N[],int A);
        friend void prdata(const Girl &,const Boy &);
};

Girl::Girl(char N[],int A){
    strcpy(name,N);
    age = A;
}

class Boy{
    private:
        char name[25];
        int age;
    public:
        Boy(char N[],int A);
        friend void prdata(const Girl &,const Boy &);
};

Boy::Boy(char N[],int A){
    strcpy(name,N);
    age = A;
}

void prdata(const Girl &plg,const Boy & plb){
    cout<<"女孩姓名为:"<<plg.name<<",年龄为:"<<plg.age<<endl;
    cout<<"男孩姓名为:"<<plb.name<<",年龄为:"<<plb.age<<endl;
}

int main(){
    Girl g1("Taeyeon",27);
    Girl g2("jessica",27);
    Girl g3("yoona",26);
    Boy b1("xiaoming",14);
    Boy b2("huashan",22);
    Boy b3("waiter",20);

    prdata(g1,b1);
    prdata(g2,b2);
    prdata(g3,b3);

    return 0;
}
