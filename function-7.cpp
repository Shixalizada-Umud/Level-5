#include <iostream>
using namespace std;

string f8(int n) {
    if (n == 0) return "0";
    string s = "";
    while (n > 0) {
        s = char((n % 2) + '0') + s;
        n /= 2;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << f8(n);
    return 0;
}