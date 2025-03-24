// 코딩은 체육과목 입니다
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    n /= 4;

    for (int i = 0; i < n; i++) {
        cout << "long ";
    }

    cout << "int\n";
}