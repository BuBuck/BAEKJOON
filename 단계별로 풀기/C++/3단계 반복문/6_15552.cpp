// 빠른 A+B
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    int a, b;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        cout << a + b << '\n';
    }
}