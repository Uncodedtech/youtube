#include <bits/stdc++.h>
using namespace std;

// There are N piles of stones, i-th has a[i] stones.
// There are two players. Each can take any nonnegative numbers of stones from a pile.
// If piles are empty and you cannot make a move, you lose.
// Who will win?

int main() {
	int n;
	cin >> n;
	// vector<vector<int>> a(n, vector<int>(n)); // O(N^3 * log(N))
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cout << (row ^ col) << " ";
			// set<int> s;
			// for (int r = 0; r < row; r++) {
				// s.insert(a[r][col]);
			// }
			// for (int c = 0; c < col; c++) {
				// s.insert(a[row][c]);
			// }
			// int x = 0;
			// while (s.count(x)) {
				// x++;
			// }
			// a[row][col] = x;
			// cout << a[row][col] << " ";
		}
		cout << "\n";
	}
}
