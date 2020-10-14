#include <string>
#include <unordered_set>
using namespace std;


class StringSearch {
private:
	string example;
	unordered_set<char> record_char;
	int rk = -1, ans = 0;
public:
	StringSearch();
	int CalLength();
	void PalindromeSearch();
	void print_len();
};


/*
* 找到最大的无重复连续子字符串
StringSearch solution;
solution.print_len();
*/

/*
*  找到最长的回文子串
* 	StringSearch demo;
	demo.PalindromeSearch();
*/
