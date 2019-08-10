#include <iostream>

using namespace std;

struct Even {
    int a, b;

    Even() {a = b = 0; }

    ~Even() { cout << "Do it..." << endl; }

    void setA(int n) { a = n; }
    void setB(int n) { b = n; }

    void show() {
        cout << "a = " << a << ", b = " << b << "; sum = " << a+b << endl;
    }
};

struct EvenChild : Even {
    
    EvenChild(int a, int b) {
    this->a = a;
    this->b = b;
    }
};

void test00() {
    EvenChild p1(100, 200);
    p1.show();
}

int main()
{
    test00();
    cin.get();
    return 0;
}
