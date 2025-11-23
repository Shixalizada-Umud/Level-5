#include <iostream>
using namespace std;

int f1(int n) {
    int cem = 0;
    for (int i = 2; i <= n; i = i + 2)
        cem = cem + i * i;
    return cem;
}

int main() {
    int n;
    cin >> n;
    cout << f1(n);
    return 0;
}