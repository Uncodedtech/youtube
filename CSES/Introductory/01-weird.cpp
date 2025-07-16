// https://cses.fi/problemset
// problems 1-12 (up to Palindrome Reorder): https://www.youtube.com/live/pL7Jy3g62GM?si=f3qegjGinj4FMVOd
// problems 13-24 (from Gray Code): https://www.youtube.com/live/cRHe4Ig3JnE?si=YWQfOvMvF6D5lzc3

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
	}
	cout << "1\n";
}
