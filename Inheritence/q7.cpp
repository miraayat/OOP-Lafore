#include <iostream>

using namespace std;
// Derived class and derived class constructors
class Counter
{
    protected: unsigned int count;

    public:
    Counter(): count(0)
    {}
    Counter(int c): count(c){}
     
    unsigned int get_count()
    {
        return count;
    }

    Counter operator ++ ()
                       
    {
        return Counter(++count);
    }
    Counter operator --()
    {
        return Counter(--count);
    }

};
class postCount: public Counter
{
    public:
    postCount(): Counter(){}
    postCount(int c):Counter(c){}
    postCount operator ++ ()
    {
        Counter :: operator ++();
    }
    postCount operator --()
    {
        Counter :: operator --();
    }
    postCount operator -- (int)
    {
        return postCount(count--);
    }
    postCount operator ++(int)
    {
        return postCount(count++);
    }
};

int main()
{
    postCount c1, c2;

    cout << "\nc1 = " <<c1.get_count();
    cout << "\nc2 = " <<c2.get_count();
    ++c1;
    c2 = c1--;
    cout << "\nc1 = " <<c1.get_count();
    cout << "\nc2 = " <<c2.get_count();    
}