#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

	int main() {
    // 작성하지 않으면 시간 초과
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    int arr[10001] = {0,};
    int num = 0;
    for (int i = 0 ; i < N ; i++) {
        cin >> num;
        arr[num] += 1;
    }

    for (int i = 1 ; i <= 10000 ; i++) {
        for (int j = 0 ; j < arr[i] ; j++) {
            cout << i << "\n";
        }
    }
    
    return 0;
}