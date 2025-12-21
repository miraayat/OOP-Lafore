#include <iostream>
using namespace std;


class tollBooth
{
    private: unsigned int cars;
    double amount;
    public:
    tollBooth(): cars(0), amount(0.0){}
    void payingCar()
    {
        cars++;
        amount += 0.50;
    }
    void nopayCar()
    {
        cars++;
    }
    void display()const
    {
    
        cout <<"\nTotal Cars: "<< cars;
        cout <<"\nTotal amount: " << amount;
    }
};
int main()
{
    tollBooth t1;
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.nopayCar();
    t1.display();
}