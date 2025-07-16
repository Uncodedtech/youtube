#include <bits/stdc++.h>
using namespace std;

// lexicographically smaller = minimize first character, then second, ...

// For every character to place:
	// for each possibility from A to Z:
		// if you can place it here & you will still be able to finish the string:
			// place it here
			// break

int main() {
	string s;
	cin >> s;
	int n = s.length();
	
	vector<int> freq(26);
	// a..z -> how many times it appears
	for (char c : s) {
		freq[c-'A']++;
	}
	string answer;
	while ((int) answer.length() < n) { // O(N * 26)
		bool anything = false;
		pair<int,int> big{0, 0}; // max1, max2
		for (int x : freq) {
			if (x > big.first) {
				big = {x, big.first};
			}
			else if (x > big.second) {
				big.second = x;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0 && (answer.empty() || answer.back() != ('A' + i))) {
				freq[i]--;
				answer += ('A' + i);
				// can I still finish?
				int suffix = n - (int) answer.length();
				bool can_finish = true;
				if (freq[i] > suffix/2) {
					can_finish = false;
				}
				if ((freq[i]+1 == big.first ? big.second : big.first) > (suffix+1)/2) {
					can_finish = false;
				}
				// for (int j = 0; j < 26; j++) {
					// if (i != j) {
						// if (freq[j] > (suffix+1)/2) {
							// can_finish = false;
							// break;
						// }
					// }
					// else {
						// if (freq[j] > suffix/2) {
							// can_finish = false;
							// break;
						// }
					// }
				// }
				if (can_finish) {
					anything = true;
					break;
				}
				else {
					freq[i]++;
					answer.pop_back();
				}
			}
		}
		if (!anything) {
			break;
		}
	}
	if (answer.empty()) {
		cout << "-1\n";
	}
	else {
		cout << answer << "\n";
	}
}

// already placed: AXBADBAB _ B _ B _


// remaining: XBBXB
            // ^^ ^
            
            
// N = even              e.g. N=8
// if freq[i] > N/2      e.g. freq[i]=5
		// then no solution
		
		
// N = odd                  e.g. N=7
// if freq[i] > N/2+1       e.g. freq[i]=5
       // then no solution
