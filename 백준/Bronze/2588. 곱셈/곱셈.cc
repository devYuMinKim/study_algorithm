#include <iostream>

using namespace std;

int main() {
    int val1, val2;
    
    cin >> val1 >> val2;
    // cin >> val2;
    
    cout << val1 * (val2 % 10) << "\n";
    cout << val1 * ((val2 / 10) % 10) << "\n";
    cout << val1 * (val2 / 100) << "\n";
    cout << val1 * val2;
    
    return 0;
}