Given the head of a linked list and an integer val, remove all the nodes of the linked list
that has Node.val == val, and return the new head.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* temp = head;
    struct ListNode* curr = temp;
    while(temp != NULL){
        while(temp != NULL && temp->val == val){
            if(curr == temp){
                head = temp ->next;
                temp = head;
                curr = temp;
            }
            else {
                curr->next = temp->next;
                temp = curr->next;
            }
        }
        curr = temp;
        if(temp != NULL)
            temp = temp->next;
        else
            break;
    }
    return head;
}
