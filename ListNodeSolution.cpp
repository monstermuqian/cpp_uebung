#include "ListNodeSolution.h"
#include <iostream>
using namespace std;

int ListNodeSolution::length(ListNode* l1) {
	int len = 1;
	ListNode* p1 = nullptr;
	p1 = l1;
	while (p1->next != nullptr) {
		len++;
		p1 = p1->next;
	}

	return len;
}

void ListNodeSolution::moreZero(ListNode* l1, int len1, int len2) {
	for (int i = 0; i < (len1 - len2); ++i) {
		l1->next = new ListNode(0);
		l1 = l1->next;
	}
}

void ListNodeSolution::printListNode(ListNode* l1) {
	while (l1 != nullptr) {
		cout << l1->val << " ";
		l1 = l1->next;
	}
}


int ListNodeSolution::get_sum(ListNode* l1, ListNode* l2,  int sum , int pos, int temp_result) {
	while (l1 != nullptr) {
		temp_result = (l1->val + l2->val) * (int)pow(10, pos);
		sum += temp_result;
		++pos;
		l1 = l1->next;
		l2 = l2->next;
	}

	return sum;
};

bool ListNodeSolution::ifoverflow(int sum, int len) {
	bool flag = false;

	//利用sum除比原链表长度多一位的10的倍数，若余数为零，则说明没有多一位
	int redudant = sum - (sum % (int)pow(10, len));
	if (redudant) {
		flag = true;
	}

	return flag;
}

int ListNodeSolution::get_nodenumber(int sum, int index) {
	int temp_node = 0;
	temp = sum % (int)pow(10, index);
	sum = sum - temp;
	temp_node = temp / (pow(10, index - 1));

	return temp_node;
}

//使用这个方法可以从一串数字中生成一个链表，每个链表中只有一个单位数字
void ListNodeSolution::new_ListNode(bool flag, ListNode* l1, int sum, int len, int temp_node) {
	if (flag) {
		for (int i = 1; i < len + 1; ++i) {
			temp_node = ListNodeSolution::get_nodenumber(sum, i + 1);
			l1->next = new ListNode(temp_node);
			l1 = l1->next;
		}
	}
	else {
		for (int i = 1; i < len; ++i) {
			temp_node = ListNodeSolution::get_nodenumber(sum, i + 1);
			l1->next = new ListNode(temp_node);
			l1 = l1->next;
		}
	}
}


//使用这个方法可以删除倒数第n个Node
ListNode* ListNodeSolution::delLastNNode(ListNode* l1, int n) {
	int len = 1;
	ListNode* p1 = nullptr;
	p1 = l1;
	while (p1->next != nullptr) {
		p1 = p1->next;
		++len;
	}
	int pos = len - n + 1;
	if (pos == 1) {
		l1 = l1->next;
		return l1;
	}
	p1 = l1;
	int count = 1;
	while (p1 != nullptr) {
		if ((count + 1) == pos) {
			p1->next = p1->next->next;
			return l1;
		}
		p1 = p1->next;
		++count;
	}
}