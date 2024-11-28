#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int result = 0;
    int num = n;
    while(n > 0) {
        int lastdig = n % 10;
        result = (result * 10) + lastdig;
        n = n / 10;
    }
    if(num == result) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << isPalindrome(1331) << endl;
    return 0;
}