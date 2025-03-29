// 명령 프롬프트
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    string str;
    string result;

    cin >> n;
    cin >> result;
    
    for (int i = 1; i < n; i ++) {
        cin >> str;

        for (int j = 0; j < result.length(); j++) {
            if (result[j] != str[j]) {
                result[j] = '?';
            }
        }
    }

    cout << result << '\n';
}