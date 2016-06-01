#include<iostream>

using namespace std;

class Small_cat{
    private:
        double weight;
        static double total_weight;
        static double total_number;

    public:
        Small_cat(double w);
        void display();
        static void total_disp();
};

Small_cat::Small_cat(double w){
    weight = w;
    total_weight += w;
    total_number++;
}

void Small_cat::display(){
    cout<<"这只小猫猫的重量是:"<<weight<<"千克\n";
}

void Small_cat::total_disp(){
    cout<<total_number<<"只小猫的总重量为:";
    cout<<total_weight<<"千克\n";
}

double Small_cat::total_weight = 0;
double Small_cat::total_number = 0;

int main(){
    Small_cat w1(1.5),w2(2.2),w3(0.7);

    w1.display();
    w2.display();
    w3.display();

    Small_cat::total_disp();

    return 0;
}
