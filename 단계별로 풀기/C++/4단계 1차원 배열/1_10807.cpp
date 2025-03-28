// 개수 세기
#include <iostream>

using namespace std;

int main() {
    int n, v, temp = 0;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> *(array + i);
    }

    cin >> v;

    for (int i = 0; i < n; i++) {
        if (v == *(array + i))
            temp++;
    }

    delete [] array;

    cout << temp << '\n';
}