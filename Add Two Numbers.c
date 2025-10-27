#include <stdlib.h>

struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;
    dummy.next = NULL;
    int carry = 0;

    while (l1 || l2 || carry) {
        int val1 = (l1) ? l1->val : 0;
        int val2 = (l2) ? l2->val : 0;
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        current->next = newNode(sum % 10);
        current = current->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy.next;
}
