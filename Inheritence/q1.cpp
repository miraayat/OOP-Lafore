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
class book : public Publication
{
    private: int pageCount;

    public:
    book(): Publication(), pageCount(0){}
    book(string s, float p, int t): Publication(s, p), pageCount(t){}

    void get_data()
    {
        Publication :: get_data();
        cout << "\nEnter the number of pages: "; cin >> pageCount;
    }
    void put_data() const
    {
        Publication :: put_data();
        cout << "\nNo. of pages: " << pageCount;
    }
};
class tape :public Publication
{
    private: float listenTime;

    public:
    tape():Publication(), listenTime(0.0f){}
    tape(string s, float p, float lt): Publication(s, p), listenTime(lt){}

    void get_data()
    {
        Publication :: get_data();
        cout << "\nEnter the playing time in minutes: "; cin >> listenTime;
    }
    void put_data() const
    {
        Publication :: put_data();
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