#pragma once

/**
 * Definition for singly-linked list.
 */

#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	static ListNode* partition(ListNode* head, int x) {
		ListNode left(0), right(0);
		ListNode *lp = &left, *rp = &right;

		while (head) {
			ListNode *&p = head->val >= x ? rp : lp;
			p->next = head;
			p = p->next;
			head = head->next;
		}

		lp->next = right.next;
		rp->next = NULL;
		return left.next;
	}
};