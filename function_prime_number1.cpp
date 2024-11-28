#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isPrime(-1) << endl;
    cout << isPrime(1) << endl;
    cout << isPrime(2) << endl;
    cout << isPrime(34) << endl;
    cout << isPrime(37) << endl;
    return 0;
}