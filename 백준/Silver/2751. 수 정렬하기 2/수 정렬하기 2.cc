#include <iostream>
#include <algorithm>

using namespace std;

int num[1000000];   // 배열의 크기가 크므로 전역범위에서 선언

int main() {
	int N;          // 수의 개수
	cin >> N;

	for (int i = 0 ; i < N ; i++) {
		cin >> num[i];
	}

	sort(num, num + N);

	for (int i = 0 ; i < N ; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}