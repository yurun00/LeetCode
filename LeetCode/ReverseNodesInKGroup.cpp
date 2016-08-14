/*
 * Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
 * If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.
 * You may not alter the values in the nodes, only nodes itself may be changed.
 * Only constant memory is allowed.
 * ---------- ----------
 * For example,
 * Given this linked list: 1->2->3->4->5
 * For k = 2, you should return: 2->1->4->3->5
 * For k = 3, you should return: 3->2->1->4->5
 */

/*#include <iostream>
#include "ReverseNodesInKGroup.h"
using namespace std;

int main() {
	ListNode *head = NULL, *pre = NULL, *tmp = NULL;
	for (int i = 1;i < 8;i++) {
		tmp = new ListNode(i);
		if (i == 1)
			head = tmp;
		else
			pre->next = tmp;
		pre = tmp;
	}
	tmp = Solution::reverseKGroup(head, 2);
	for (int i = 1;i < 8;i++) {
		cout << tmp->val << endl;
		tmp = tmp->next;
	}
	while(head != NULL) {
		tmp = head;
		head = head->next;
		delete tmp;
	}
	return 0;
}*/