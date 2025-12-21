#include <iostream>
using namespace std;

class Time
{
    private:
    int hrs;
    int min;
    int sec;
    public:
    Time():hrs(00),min(00),sec(00){}
    Time(int h, int m, int s): hrs(h), min(m), sec(s){}
    void display() const
    {
        if(hrs < 9)
        {
            cout <<'0';
        }
        cout << hrs <<":";
        if(min < 9)
        {
            cout <<'0';
        }
        cout<< min <<":";
        if(sec < 9)
        {
            cout <<'0';
        }
        cout << sec << endl;    
    }

    Time add(Time t1, Time t2)
    {
        int h = t1.hrs + t2.hrs;
        int m = t1.min +t2.min;
        int s = t1.sec + t2.sec;
        if (s >= 60) 
        {
            s -= 60;
            m++;
        }
        if (m >= 60) 
        {
            m -= 60;
            h++;
        }
        if (h >= 24) 
        {
            h -= 24;
        }
        return Time(h, m, s);
    }
};
int main()
{
    Time t1(12, 30, 3);
    t1.display();
    Time t2(5, 31, 4);
    Time t3;
    t3 = t1.add(t1,t2);
    t3.display();
}