// A/B
#include <iostream>

using namespace std;

int main(){

    double a, b;

    cin >> a >> b;

    cout.precision(9);
    cout << fixed;
    cout << a / b << endl;
    cout.unsetf(ios::fixed);

    return 0;
}