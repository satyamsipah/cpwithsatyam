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

void allPrime(int n) {
    for(int i=2; i<=n; i++) {
        if(isPrime(i) == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    allPrime(50);
    return 0;
}