#include <bits/stdc++.h>
using namespace std;

long long answer = 0;
vector<string> grid(8);
bool colAttacked[8];
bool diagSum[15], diagDiff[15];

// backtracking

// O(N! * N) but way faster in practice because of diagonals
void place(int row) {
	if (row == 8) {
		answer++;
		return;
	}
	for (int col = 0; col < 8; col++) {
		if (grid[row][col] == '.' && !colAttacked[col] && !diagSum[row+col] && !diagDiff[row-col+7]) {
			// grid[row][col] = 'Q';
			colAttacked[col] = true;
			diagSum[row+col] = true;
			diagDiff[row-col+7] = true;
			place(row+1);
			colAttacked[col] = false;
			diagSum[row+col] = false;
			diagDiff[row-col+7] = false;
			// grid[row][col] = '.';
		}
	}
}

int main() {
	for (string& s : grid) {
		cin >> s;
	}
	place(0);
	cout << answer << "\n";
}
