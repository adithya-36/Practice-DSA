#include <iostream>
using namespace std;

// Recursive function
void func(int i, int n) {
    if (i < 1) 
        return;
    func(i - 1, n);  // recursive call
    cout << i << " "; // print value of i
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  // input

    func(n, n); // call recursive function
    return 0;
}
