#include <bits/stdc++.h>
using namespace std;

// alternative solution: (long long) n * (n + 1) / 2 - sum

// O(N) time & memory
int main() {
	int n;
	cin >> n;
	vector<bool> vis(n+1);
	// 1 .. n
	for (int i = 0; i < n - 1; i++) {
		int x;
		cin >> x;
		vis[x] = true;
	}
	for (int x = 1; x <= n; x++) {
		if (!vis[x]) {
			cout << x << "\n";
			return 0;
		}
	}
}
