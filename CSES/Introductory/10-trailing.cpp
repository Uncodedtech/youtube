#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 0;
	for (long long m = 5; m <= n; m *= 5) {
		answer += n / m;
	}
	cout << answer << "\n";
	// cout << n / 5 + n / 25 + n / 125 + n / 625 + ... << "\n";
}
// 5! = 5 * 4 * 3 * 2 * 1 = 120
