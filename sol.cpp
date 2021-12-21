#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// all the sequences are valid unless there is one non-equal pair
		string ans = "YES";
		if (count(s.begin(), s.end(), 'N') == 1) {
			ans = "NO";
		}
		cout << ans << '\n';
	}
	return 0;
}
