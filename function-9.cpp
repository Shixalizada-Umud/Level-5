#include <iostream>
using namespace std;

bool f10(int n) {
    int c = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            c += i;
    return c == n;
}

int main() {
    int n;
    cin >> n;
    cout << (f10(n) ? 1 : 0);
    return 0;
}