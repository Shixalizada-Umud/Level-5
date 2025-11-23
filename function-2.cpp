#include <iostream>
using namespace std;

int f2(int n) {
    int s = 0;
    if (n == 0) return 1;
    while (n != 0) {
        s++;
        n = n / 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << f2(n);
    return 0;
}