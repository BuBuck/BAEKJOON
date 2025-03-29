// 별 찍기 - 4 
#include <iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++){
            cout << ' ';
        }

        for (int j = num - 1; j >= i; j--) {
            cout << '*';
        }

        cout << '\n';
    }
}