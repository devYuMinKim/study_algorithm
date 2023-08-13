#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t, R;
	string s;

	cin >> t;

	while (t--) {
		cin >> R >> s;

		for (int i = 0; i < s.length(); i++) {
			for (int k = 0; k < R; k++) {
				cout << s[i];
			}
		}
		cout << '\n';
	}

    return 0;
}