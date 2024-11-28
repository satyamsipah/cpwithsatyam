#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while(n > 0) {
        int lastdig = n % 10;
        sum = sum + lastdig;
        n = n / 10;
    }
    return sum;
}

int main() {
    cout << digitSum(12345) << endl;
    return 0;
}