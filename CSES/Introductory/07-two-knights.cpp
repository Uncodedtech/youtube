#include <bits/stdc++.h>
using namespace std;

int main() {
	int max_n;
	cin >> max_n;
	// O(N)
	// it's magic that it works for n <= 3
	for (long long n = 1; n <= max_n; n++) {
		long long size = n * n;
		long long allWays = size * (size - 1) / 2;
		long long badWays = 0;
		badWays += 8 * (n-4) * (n-4);
		badWays += 6 * (n-4) * 4;
		badWays += 4 * (n-3) * 4;
		badWays += 3 * 8;
		badWays += 2 * 4;
		badWays /= 2;
		cout << allWays - badWays << "\n";
	}
}

// 234444444444432
// 346666666666643
// 468888888888864
// 468888888888864
// 468888888888864
// 468888888888864
// 468888888888864
// 468888888888864
// 346666666666643
// 234444444444432
