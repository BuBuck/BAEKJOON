// 주사위 세개
#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000 << '\n';
    } else if (a == b) {
        cout << 1000 + a * 100 << '\n';
    } else if (b == c) {
        cout << 1000 + b * 100 << '\n';
    } else if (c == a) {
        cout << 1000 + c * 100 << '\n';
    } else {
        cout << max * 100 << '\n';
    }
}