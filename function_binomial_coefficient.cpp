#include <iostream>
using namespace std;

int factorial(int x) {
    int facto = 1;
    for(int i=1; i<=x; i++) {
        facto *= i; // facto = facto * i
    }
    return facto;
}

int binCoeff(int n , int r) {
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2 * val3);
    return result;
}

int main() {
    cout << binCoeff(4 , 2) << endl;
    return 0;
}