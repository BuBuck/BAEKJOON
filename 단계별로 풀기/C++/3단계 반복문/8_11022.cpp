// A+B - 8
#include <iostream>

using namespace std;

int main() {
    int t;
    int a, b;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
    }
}