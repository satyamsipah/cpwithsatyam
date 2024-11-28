#include <iostream>
using namespace std;

int binTodec(int n) {
    int decNum = 0;
    int pow = 1;

    while(n > 0) {
        int lastdig = n % 10;
        decNum = decNum + (lastdig * pow); 
        pow = pow * 2;
        n = n / 10;
    }
    return decNum;
}

int main() {
    cout << binTodec(1001) << endl;
    return 0;
}