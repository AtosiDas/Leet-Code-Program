Given the head of a sorted linked list, delete all duplicates such that each element appears only
once. Return the linked list sorted as well.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* temp = head;
    while(temp != NULL) {
        while(temp->next != NULL && temp->val == temp->next->val){
            temp->next = temp->next->next;
        }
    temp = temp->next;
    }
    return head;
}

