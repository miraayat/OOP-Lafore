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
class sales
{
    private: static const int months = 3;
    float dsales[months];
    
    public:
    void get_data()
    {
        float temp;
        for(int i = 0; i < months; i++)
        {
            cout <<"\nEnter sales for month " <<i + 1 <<": ";
            cin >> temp;
            dsales[i] = temp;
        }
    }
    void put_data() const
    {
        for (int i = 0; i < months; i++)
        {
            cout <<"\nSales for month "<< i+1 <<": " << dsales[i];
        }
    }
};
class book : public Publication, public sales
{
    private: int pageCount;

    public:
    book(): Publication(), pageCount(0){}
    book(string s, float p, int t): Publication(s, p), pageCount(t){}

    void get_data()
    {
        Publication :: get_data();
        cout << "\nEnter the number of pages: "; cin >> pageCount;
        sales :: get_data();
    }
    void put_data() const
    {
        Publication :: put_data();
        cout << "\nNo. of pages: " << pageCount;
        sales :: put_data();
    }
};
class tape :public Publication, public sales
{
    private: float listenTime;

    public:
    tape():Publication(), listenTime(0.0f){}
    tape(string s, float p, float lt): Publication(s, p), listenTime(lt){}

    void get_data()
    {
        Publication :: get_data();
        cout << "\nEnter the playing time in minutes: "; cin >> listenTime;
        sales :: get_data();
    }
    void put_data() const
    {
        Publication :: put_data();
        cout << "\nPlay time: "<< listenTime <<" minutes";
        sales :: put_data();
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