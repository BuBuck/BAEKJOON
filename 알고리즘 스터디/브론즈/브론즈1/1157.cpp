// 단어 공부
#include <iostream>

using namespace std;

int main() {
    int alpha[26], cnt = 0;
    string str;

    cin >> str;

    for(int i = 0;i < str.length(); i++) {
        if(str[i] < 97) alpha[str[i] - 65]++;

        else alpha[str[i] - 97]++;
    }

    int max = 0, max_indx=0;

    for(int i = 0; i < 26; i++) {
        if(max < alpha[i]) {
            max = alpha[i];
            max_indx = i;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(max == alpha[i]) cnt++;
    }

    if(cnt > 1) cout << "?\n";

    else cout << (char)(max_indx + 65) << '\n';
}