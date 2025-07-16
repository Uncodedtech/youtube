#include <bits/stdc++.h>
using namespace std;

int MOD = 1'000'000'007;

int main() {
	int n;
	cin >> n;
	int answer = 1;
	for (int i = 0; i < n; i++) { // O(N)
		answer = (2 * answer) % MOD;
	}
	cout << answer << "\n";
}
