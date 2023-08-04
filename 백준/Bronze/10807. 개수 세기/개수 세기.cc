#include <iostream>

using namespace std;

int main() {
    int N, result = 0;

    cin >> N;

    int arr[N];
    for (int i = 0 ; i < N ; i++) {
        cin >> arr[i];
    }

    int v;

    cin >> v;

    for (int i = 0 ; i < N ; i++) {
        if (v == arr[i]) {
            result++;
        }
    }

    cout << result << endl;
    
    return 0;
}