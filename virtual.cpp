
#include <iostream>
using namespace std;
class Base {
private: int a = 1;
protected: int b = 2;
public: int c = 3;
};

class Derived : public Base {
public:
    void show() {
        // a not accessible
        cout <<a<<" "<< b << " " << c;
    }
};

int main() {
    Derived d;
    d.a;
    d.b; 
    cout << d.c; //✅ // works
}