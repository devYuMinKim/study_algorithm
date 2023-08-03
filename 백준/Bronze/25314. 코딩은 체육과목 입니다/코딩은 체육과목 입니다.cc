#include <iostream>

using namespace std;

int main() {
    int N;
    string result = "";

    cin >> N;

    N /= 4;

    for (int i = 0 ; i < N ; i++) {
        result += "long ";
    }

    result += "int";

    cout << result << endl;
    
    return 0;
}