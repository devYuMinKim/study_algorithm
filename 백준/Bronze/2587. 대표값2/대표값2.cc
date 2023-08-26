#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int num[5];

int main() {
  int sum = 0;

  for (int i = 0 ; i < 5 ; i++) {
    cin >> num[i];
    sum += num[i];
  }

  sort(num, num + 5);

  cout << sum / 5 << endl;
  cout << num[2] << endl;

	return 0;
}