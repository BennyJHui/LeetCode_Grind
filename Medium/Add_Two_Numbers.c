#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* temp;

    temp = l1;
    printf("%p \n", temp);
    printf("%p \n", *temp);
    printf("%p \n", &temp);
    printf("%d \n", temp);
    printf("%d \n", *temp);
    printf("%d \n", &temp);
    printf("%d \n", temp->val); // &n1_1
    temp = temp->next; // &n1_2
    printf("%d \n", temp->val);
    temp = temp->next;
    printf("%d \n", temp->val);
    
    if (temp->next == NULL) {
        printf("done \n");
    }

    return temp;

}

/*
ohhh, i understand. The reason you have 2 values for {,} is because struct ListNode { int val; struct ListNode *next; }; there is only two intializations here. and also the order would have value as first and then comes the next address
*/

int main() {

    // ---------- manually create l1: 2 -> 4 -> 3 ----------
    struct ListNode n1_3 = {3, NULL};
    struct ListNode n1_2 = {4, &n1_3};
    struct ListNode n1_1 = {2, &n1_2};
    struct ListNode *l1 = &n1_1;

    // ---------- manually create l2: 5 -> 6 -> 4 ----------
    struct ListNode n2_3 = {4, NULL};
    struct ListNode n2_2 = {6, &n2_3};
    struct ListNode n2_1 = {5, &n2_2};
    struct ListNode *l2 = &n2_1;

    // ---------- run your function ----------
    struct ListNode *res = addTwoNumbers(l1, l2);

    // ---------- print result manually ----------
    struct ListNode *cur = res;
    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");

    return 0;
}