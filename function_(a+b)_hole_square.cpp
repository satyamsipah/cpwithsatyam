#include <iostream>
using namespace std;

int abSquare(int a , int b) {
    return (a*a + b*b + 2*a*b);
}

int main() {
    cout << abSquare(2 , 4) << endl;
    return 0;
}