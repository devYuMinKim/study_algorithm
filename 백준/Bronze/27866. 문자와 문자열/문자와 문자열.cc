#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int i;
    cin >> i;

    cout << s.substr(i - 1, 1) << endl;

    return 0;
}