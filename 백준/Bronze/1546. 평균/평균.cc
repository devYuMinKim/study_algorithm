#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int N;
  double sum = 0.0;
  cin >> N;

  double sco[N];
  for (int i = 0 ; i < N ; i++)
    cin >> sco[i];

  sort(sco, sco + N);

  for (int i = 0 ; i < N ; i++) {
    sum += sco[i] / sco[N - 1] * 100;
  }

  cout << sum / N << endl;

	return 0;
}