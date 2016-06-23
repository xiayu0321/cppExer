#include<iostream>

using namespace std;

class Coord{
    private:
        int x,y;
    public:
        Coord(int i = 0,int j = 0){
            x = i;
            y = j;
        }
        void print(){
            cout<<"x = "<<x<<",y = "<<y<<endl;
        }
        friend Coord operator++(Coord &obj){
            ++obj.x;
            ++obj.y;

            return obj;
        }
};

int main(){
    Coord ob(10,20);
    ob.print();

    ++ob;
    ob.print();

    operator ++(ob);
    ob.print();

    return 0;
}
