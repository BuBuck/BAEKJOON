// 최댓값
#include <iostream>

using namespace std;

int main(){
    int num;
    int max = 0;
    int count;
    
    for (int i = 1; i <= 9; i++) {
        cin >> num;

        if (num > max) {
            max = num;
            count = i;
        }
    }

    cout << max << '\n' << count << '\n';
}