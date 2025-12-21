#include <iostream>
using namespace std;


class Obj
{
    private:static int count;
     unsigned int serial;
    public:
    Obj()
    {
        count++;
        serial = count;
    }
     
    void show()
    {
        cout << " \ni am object number: "<< serial;
    }
};
int Obj :: count = 0;
int main()
{
    Obj o1,o2,o3;
    o1.show();
    o2.show();
    o3.show();
}


