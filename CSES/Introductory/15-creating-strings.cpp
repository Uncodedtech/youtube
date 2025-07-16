#include <bits/stdc++.h>
using namespace std;

int freq[26];
int n;
vector<string> answer;

void build(string s) { // O(N! * (N+26))
	if ((int) s.length() == n) {
		answer.push_back(s);
		return;
	}
	for (int i = 0; i < 26; i++) {
		if (freq[i] > 0) {
			freq[i]--;
			build(s + char('a'+i));
			freq[i]++;
		}
	}
}

int main() { // O(N! * N)
	string s;
	cin >> s;
	n = (int) s.length();
	for (char c : s) {
		freq[c-'a']++;
	}
	build("");
	cout << answer.size() << "\n";
	for (string a : answer) {
		cout << a << "\n";
	}
}

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() { // O(N! * N)
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> answer;
	do {
		answer.push_back(s);
	} while (next_permutation(s.begin(), s.end()));
	cout << answer.size() << "\n";
	for (string a : answer) {
		cout << a << "\n";
	}
}
*/
