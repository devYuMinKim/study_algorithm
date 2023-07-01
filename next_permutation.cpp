#include<bits/stdc++.h>

using namespace std;

int main() {
  int a[] = {2, 1, 3};

  sort(&a[0], &a[0] + 3);

  do {
    for (int i : a) cout << i << " ";
    cout << '\n';
  } while(next_permutation(&a[0], &a[0] + 3));
}