#include <iostream>

using namespace std;

int main() {
  int m, n, max = -1;
	int arr[9][9];
  for (int i = 0 ; i < 9 ; i++)
    for (int j = 0 ; j < 9 ; j++)
      cin >> arr[i][j];
  
  for (int i = 0 ; i < 9 ; i++)
    for (int j = 0 ; j < 9 ; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
        m = i;
        n = j;
      }
    }

  cout << max << endl;
  cout << m + 1 << " " << n + 1 << endl;

	return 0;
}