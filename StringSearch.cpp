#include <iostream>
#include "StringSearch.h"


StringSearch::StringSearch() {
	cout << "enter the string that you want to text :";
	cin >> example;
}

int StringSearch::CalLength() {
	int len = example.length();
	for (int i = 0; i < len; ++i) {
		if (i != 0) {
			record_char.erase(example[i - 1]);
		}
		while (rk + 1 < len && !record_char.count(example[rk + 1])) {
			record_char.insert(example[rk + 1]);
			++rk;
		}
		ans = max(ans, rk - i + 1);

	}

	return ans;
}

void StringSearch::print_len() {
	int answer = StringSearch::CalLength();
	cout << "你输入的这串狗屎中最长的子狗屎的长度是" << answer << endl;
}

void StringSearch::PalindromeSearch() {
	int len = example.length();
	vector<vector<int>> state(len, vector<int>(len));
	int l = 0;
	string answer;
	for (int i = 0; i < len; ++i) {
		for (int j = 0; i + j < len; ++j) {
			l = i + j;
			if (i == 0) {
				state[j][l] = 1;
			}
			else if (i == 1) {
				state[j][l] = (example[j] == example[l]);
			}
			else
			{
				state[j][l] = ((state[j + 1][l - 1]) && (example[j] == example[l]));
			}
			if (state[j][l] && (i + 1 > answer.length())) {
				answer = example.substr(j, i + 1);
			}
		}
	}

	cout << "the longest substring that you want to search is: " << answer;
}