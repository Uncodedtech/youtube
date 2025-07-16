#include <bits/stdc++.h>
using namespace std;

int main() {
	// if A appears even number of times -> put half at front, half at back
	// if B appears even number of times -> put half at front, half at back
	vector<int> freq(26);
	string s;
	cin >> s;
	int n = s.length();
	for (char c : s) {
		freq[c-'A']++; // we subtract ASCII values
		// so we change char A..Z into value 0..25
	}
	string half;
	char mid = '?';
	for (int c = 0; c < 26; c++) {
		if (freq[c] % 2 == 1) {
			if (n % 2 == 0 || mid != '?') {
				cout << "NO SOLUTION\n";
				return 0;
			}
			else {
				mid = 'A' + c;
			}
			freq[c]--;
		}
		half += string(freq[c] / 2, 'A' + c);
	}
	cout << half;
	if (mid != '?') {
		cout << mid;
	}
	reverse(half.begin(), half.end());
	cout << half << "\n";
}

/*
	bool already_mid = false;
	int taken = 0;
	for (int c = 0; c < 26; c++) {
		if (freq[c] % 2 == 1) {
			if (n % 2 == 0 || already_mid) {
				cout << "NO SOLUTION\n";
				return 0;
			}
			else {
				already_mid = true;
				s[n/2] = 'A' + c;
			}
			freq[c]--;
		}
		int half = freq[c] / 2;
		for (int i = 0; i < half; i++) {
			s[taken+i] = s[n-1-taken-i] = 'A' + c;
		}
		taken += half;
	}
	cout << s << "\n";
*/
