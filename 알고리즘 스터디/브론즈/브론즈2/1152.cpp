// 단어의 개수
#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') count++;
    }

    if (str[0] == ' ') count--;
    if (str[str.length() - 1] == ' ') count--;

    count++;

    cout << count << '\n';
}