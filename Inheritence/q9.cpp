#include <iostream>
using namespace std;

class Publication
{
    protected: 
    string title;

    float price;

    public:
    Publication(): title(""), price(0.0f){}
    Publication(string s, float p):title(s), price(p){}

    void get_data() 
    {
        cout << "\nEnter title: "; cin >> title;
        cout << "\nEnter price: "; cin >> price;
    }
    void put_data() const
    {
        cout <<"\nTitle: " << title;
        cout <<"\nPrice: " << price;
    }
};
class Publication2 : public Publication
{
    protected: int day, month, year;
    public:
    Publication2():Publication(),day(00),month(00),year(00){}
    Publication2(string s, float p, int d, int m, int y):Publication(s, p),day(d), month(m), year(y){}

    void get_data()
    {
        char s;
        Publication :: get_data();
        cout <<"\nEnter date in format(dd/mm/yy): ";
        cin >> day>> s >> month>> s >> year;
    }
    void put_data() const
    {
       Publication :: put_data();
       cout << "\nDate: "<<day <<"/" << month <<"/" <<year;
    }

};

class book : public Publication2
{
    private: int pageCount;

    public:
    book(): Publication2(), pageCount(0){}
    book(string s, float p,int d,int m, int y, int t): Publication2(s, p,d, m, y), pageCount(t){}

    void get_data()
    {
        Publication2 :: get_data();
        cout << "\nEnter the number of pages: "; cin >> pageCount;
    }
    void put_data() const
    {
        Publication2 :: put_data();
        cout << "\nNo. of pages: " << pageCount;
    }
};
class tape :public Publication2
{
    private: float listenTime;

    public:
    tape():Publication2(), listenTime(0.0f){}
    tape(string s, float p,int d,int m, int y, int lt): Publication2(s, p,d, m, y), listenTime(lt){}

    void get_data()
    {
        Publication2 :: get_data();
        cout << "\nEnter the playing time in minutes: "; cin >> listenTime;
    }
    void put_data() const
    {
        Publication2 :: put_data();
        cout << "\nPlay time: "<< listenTime <<" minutes";
    }
};

int main()
{
    book b;
    tape t;
    
    b.get_data();
    b.put_data();
    cout << endl;

    t.get_data();
    t.put_data();

    return 0;
}