#include <iostream>
using namespace std;

int facto(int n) {
    int facto = 1;
    for(int i=1; i<=n; i++) {
        facto = facto * i;
    }
    return facto;
}

int main() {
    cout << facto(0) << endl;
    cout << facto(1) << endl;
    cout << facto(2) << endl;
    cout << facto(3) << endl;
    cout << facto(4) << endl;
    return 0;
}