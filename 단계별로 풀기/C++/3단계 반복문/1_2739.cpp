// 구구단
#include <iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    for (int i = 1; i < 10; i++) {
        cout << num << " * " << i << " = " << num * i << '\n';
    }
}