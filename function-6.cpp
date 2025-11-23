#include <iostream>
using namespace std;

int a1(int n) {
    int s = 0, t = n;
    while (t > 0) {
        int r = t % 10;
        s += r * r * r;
        t /= 10;
    }
    return s == n;
}

void f7() {
    for (int i = 1; i <= 1000; i++)
        if (a1(i))
            cout << i << " ";
    cout << endl;
}

int main() {
    f7();
    return 0;
}