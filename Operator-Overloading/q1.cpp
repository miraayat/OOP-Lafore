#include <iostream>

using namespace std;

class Distance {
private:
    int feet;

    float inches;

public:
    Distance() : feet(0), inches(0.0f) {}

    Distance(int f, float i) : feet(f), inches(i) {}

    Distance operator+(Distance d) const {
        int f = feet + d.feet;
        float i = inches + d.inches;
        if (i >= 12) {
            i -= 12;
            f++;
        }
        return Distance(f, i);
    }

    Distance operator-(Distance d) const {
        int f = feet - d.feet;
        float i = inches - d.inches;
        if (i < 0) {
            i += 12;
            f--;
        }

        return Distance(f, i);
    }

    void getDist() {
        cout << "Enter feet:" << endl;
        cin >> feet;
        cout << "Enter inches:" << endl;
        cin >> inches;
    }

    void showDist() const {
        cout << feet << '\'' << inches << '\"';
    }
};

int main() {

    Distance a(120, 11.7f);
    Distance b(121, 3.0f);

    Distance c = a + b;
    c.showDist();
    cout << endl;

    c = b - a;
    c.showDist();
    cout << endl;

    return 0;
}