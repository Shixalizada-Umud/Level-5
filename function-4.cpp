#include <iostream>
using namespace std;

void f4() {
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a + b + c == 10)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    f4();
    return 0;
}