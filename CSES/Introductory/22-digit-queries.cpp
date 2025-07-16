#include <bits/stdc++.h>
using namespace std;

// O(T*log(K))
void test_case() {
	long long k;
	cin >> k;
	long long cnt = 9; // number of numbers of this length
	long long skipped = 0;
	for (int len = 1; true; len++) {
		if (k > len * cnt) {
			k -= len * cnt;
			skipped += cnt;
		}
		else {
			long long skip = (k-1) / len;
			skipped += skip;
			k -= skip * len;
			
			long long x = skipped + 1;
			cout << to_string(x)[k-1] << "\n";
			return;
		}
		cnt *= 10;
	}
	// 9 x 1
	// 90 x 2        <-- 90 numbers with 2 digits each
	// 900 x 3
	// 9000 x 4
	// ...
}

int main() {
	int T;
	cin >> T;
	for (int rep = 0; rep < T; rep++) {
		test_case();
	}
}
// 123456789 10 11 12 13 14 1516171819202122232425
// <------->                ^
    // 9                  k=20
