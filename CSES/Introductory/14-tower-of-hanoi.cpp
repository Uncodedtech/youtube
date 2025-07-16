#include <bits/stdc++.h>
using namespace std;

// it is hard to avoid recursion here

// O(2^N)
void solve(int n, int from, int to) {
	if (n == 0) {
		return;
	}
	// int OTHER = from ^ to;
	int OTHER = 6 - from - to;
	solve(n-1, from, OTHER);
	cout << from << " " << to << "\n";
	solve(n-1, OTHER, to);
}

int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	solve(n, 1, 3);
}
