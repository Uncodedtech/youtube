#include <bits/stdc++.h>
using namespace std;

// greedy O(N)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long answer = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			answer += a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout << answer << "\n";
}
