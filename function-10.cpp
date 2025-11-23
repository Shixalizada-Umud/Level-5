#include <iostream>
using namespace std;

int f(int n) {
    int c = 1;
    for (int i = 1; i <= n; i++)
        c = c * i;
    return c;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}