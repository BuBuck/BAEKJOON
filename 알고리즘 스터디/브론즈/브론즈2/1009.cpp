// 분산처리
#include <iostream>

using namespace std;

int main(){
    int a, b, t;
    int result;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        result = 1;

        for (int j = 0; j < b; j++) {
            result = a * result % 10;
        }

        if (result == 0) result = 10;

        cout << result << '\n';
    }
}