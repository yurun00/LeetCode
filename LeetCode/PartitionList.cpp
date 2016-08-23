/*
 * Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
 * You should preserve the original relative order of the nodes in each of the two partitions.
 * ---------- ----------
 * For example,
 * Given 1->4->3->2->5->2 and x = 3,
 * return 1->2->2->4->3->5.
 */

#include <iostream>
#include "PartitionList.h"
using namespace std;

int main() {
	int ary[6] = { 1,4,3,2,5,2 };
	ListNode *head = NULL, *pre = NULL, *tmp = NULL;
	for (int i = 0;i < 6;i++) {
		tmp = new ListNode(ary[i]);
		if (i == 0)
			head = tmp;
		else
			pre->next = tmp;
		pre = tmp;
	}
	tmp = Solution::partition(head, 3);
	for (int i = 0;i < 6;i++) {
		cout << tmp->val << endl;
		tmp = tmp->next;
	}
	while (head != NULL) {
		tmp = head;
		head = head->next;
		delete tmp;
	}
	return 0;
}