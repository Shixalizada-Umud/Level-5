#include <iostream>
using namespace std;

int f5(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            s++;
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << f5(n) << endl;
    return 0;
}