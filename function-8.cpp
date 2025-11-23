#include <iostream>
using namespace std;

bool p1(int n) {
    int o = n, r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return o == r;
}

void f9() {
    for (int i = 1; i <= 1000; i++)
        if (p1(i))
            cout << i << " ";
}

int main() {
    f9();
    return 0;
}