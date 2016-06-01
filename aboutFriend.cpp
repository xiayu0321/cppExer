#include<iostream>
#include<cstring>

using namespace std;

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

        friend void disp(Girl &);
        ~Girl(){
            delete name;
        }
};

void disp(Girl &x){
    cout<<"女孩的姓名是:"<<x.name<<",年龄:"<<x.age<<endl;
}

int main(){
    Girl g("yoona",20);
    disp(g);

    return 0;
}

