// 성 지키기
#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int rowCount = 0;
    int colCount = 0;

    char ch[n][m];
    bool row[50] = {false};
    bool col[50] = {false};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ch[i][j];
            if (ch[i][j] == 'X') {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (!row[i]) rowCount++;
    }

    for (int i = 0; i < m; i++) {
        if (!col[i]) colCount++;
    }

    int result = max(rowCount, colCount);
    cout << result << '\n';

    return 0;
}