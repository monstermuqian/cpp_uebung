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
* �ҵ��������ظ��������ַ���
StringSearch solution;
solution.print_len();
*/

/*
*  �ҵ���Ļ����Ӵ�
* 	StringSearch demo;
	demo.PalindromeSearch();
*/
