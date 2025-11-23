#include <iostream>
using namespace std;

bool s(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void f3(int n) {
    for (int i = 2; i <= n; i++)
        if (s(i))
            cout << i << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    f3(n);
    return 0;
}