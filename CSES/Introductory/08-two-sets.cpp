#include <bits/stdc++.h>
using namespace std;

// constructive problem

int main() {
	int n;
	cin >> n;
	vector<int> a, b;
	long long A = 0, B = 0;
	for (int x = n; x >= 1; --x) {
		if (A > B) {
			b.push_back(x);
			B += x;
		}
		else {
			a.push_back(x);
			A += x;
		}
	}
	if (A == B) {
		cout << "YES\n";
		cout << a.size() << "\n";
		for (int x : a) {
			cout << x << " ";
		}
		cout << "\n";
		cout << b.size() << "\n";
		for (int x : b) {
			cout << x << " ";
		}
		cout << "\n";
	}
	else {
		cout << "NO\n";
	}
}

// 1 2 3 4 5 6 7     SUM = even -> maybe we can split
                  // SUM = odd -> cannot split
// A: {7, 4, 3}
// B: {6, 5, 2, 1}

// N = 8 -> sum(1..8) = 8*9/2=36

// A:{8,5,3,2}
// B:{7,6,4,1}

// invariant: after considering values n..x, the sum differs by at most x

// A: n,n-3,  n-4,n-7, ...
// B: n-1,n-2,n-5,n-6, ...

// homework: implement groups of 4
