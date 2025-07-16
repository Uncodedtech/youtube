#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W; // height, width
	cin >> H >> W;
	vector<string> a(H);
	for (string& row : a) {
		cin >> row;
	}
	// O(H*W)
	for (int row = 0; row < H; row++) {
		for (int col = 0; col < W; col++) {
			if ((row + col) % 2 == 0) {
				a[row][col] = (a[row][col] == 'A' ? 'C' : 'A');
			}
			else {
				a[row][col] = (a[row][col] == 'B' ? 'D' : 'B');
			}
			// set<char> s;
			// if (row != 0) {
				// s.insert(a[row-1][col]);
			// }
			// if (col != 0) {
				// s.insert(a[row][col-1]);
			// }
			// s.insert(a[row][col]);
			// for (char x = 'A'; x <= 'D'; x++) {
				// if (!s.count(x)) {
					// a[row][col] = x;
					// break;
				// }
			// }
		}
		cout << a[row] << "\n";
	}
}

// ......
// ..A...
// .B?...
// ......

// originally = C


// CDABAB
// BABABA
// ABABAB


// ...........
// ....A......
// ...B?......
// ...........
// ...........
// ...........
// .....A.....
// ....B?D....
// .....C.....
// ...........
// ...........

// If we chose random order of filling H*W cells,
	// we could fail
