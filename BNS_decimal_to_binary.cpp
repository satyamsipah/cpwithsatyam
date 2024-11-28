#include <iostream>
using namespace std;

int decTobin(int n) {
    int binNum = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 2;
        binNum = binNum + ( rem * pow);
        pow = pow * 10;
        n = n / 2;
    }
    return binNum;
}

int main() {
    cout << decTobin(65) << endl;
    return 0;
}