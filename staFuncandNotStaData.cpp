#include<iostream>

using namespace std;

class Small_cat{
    private:
        double weight;
        static double total_weight;
        static double total_number;
    public:
        Small_cat(double w);
        static void display(Small_cat &w);
        static void total_disp();
};

Small_cat::Small_cat(double w){
    weight = w;
    total_weight+=w;
    total_number++;
}

void Small_cat::display(Small_cat &w){
    cout<<"这只小猫的重量为:"<<w.weight<<"千克\n";
}

void Small_cat::total_disp(){
    cout<<total_number<<"只小猫的总重量为:"<<total_weight<<"千克\n";
}

double Small_cat::total_number = 0;
double Small_cat::total_weight = 0;

int main(){
    Small_cat w1(0.5),w2(0.6),w3(0.4);

    Small_cat::display(w1);
    Small_cat::display(w2);
    Small_cat::display(w3);

    Small_cat::total_disp();

      return 0;
}
