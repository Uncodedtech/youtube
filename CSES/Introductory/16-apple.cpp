#include <bits/stdc++.h>
using namespace std;

int n;
int a[21];
long long answer = LONG_LONG_MAX;

// O(2^N)
// f(next_index, sum_of_first_set, sum_of_second_set)
// f(next_index, sumFirst - sumSecond)
void f(int i, long long diff) {
	if (i == n) {
		answer = min(answer, abs(diff));
		return;
	}
	f(i+1, diff + a[i]);
	f(i+1, diff - a[i]);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	f(0, 0);
	cout << answer << "\n";
	// O(2^N * N)
	// for (int mask = 0; mask < (1 << n); mask++) {
		// long long diff = 0;
		// for (int i = 0; i < n; i++) {
			// if (mask & (1 << i)) {
				// diff += a[i];
			// }
			// else {
				// diff -= a[i];
			// }
		// }
		// answer = min(answer, abs(diff));
	// }
}
