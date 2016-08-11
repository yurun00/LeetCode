#pragma once

/*
 * Recursion version, reverseKGroup: reverse the first K element and then reverse recursively. 
 */

#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	static ListNode* reverseKGroup(ListNode* head, int k) {
		if (k <= 0 || head == NULL)
			return head;

		int i = 1;
		ListNode *cur = head;
		while (cur != NULL && i < k) {
			cur = cur->next;
			++i;
		}
		if (cur == NULL)
			return head;
		ListNode *end = head;
		ListNode *mid = cur->next;

		cur = head;
		head = mid;
		while (cur != mid) {
			ListNode *tmp = cur->next;
			cur->next = head;
			head = cur;
			cur = tmp;
		}
		
		end->next = reverseKGroup(end->next, k);

		return head;
	}
};