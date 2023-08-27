#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int N, k;
  cin >> N >> k;

  int num[N];
  for (int i = 0 ; i < N ; i++)
    cin >> num[i];

  sort(num, num + N);

  cout << num[N - k] << endl;

	return 0;
}