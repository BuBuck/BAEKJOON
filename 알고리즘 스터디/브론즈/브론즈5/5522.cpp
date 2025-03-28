// 카드 게임   
#include <iostream>

using namespace std;

int main(){
    int a, result = 0;

    for (int i = 0; i < 5; i++){
        cin >> a;
        result += a;
    }

    cout << result;
}