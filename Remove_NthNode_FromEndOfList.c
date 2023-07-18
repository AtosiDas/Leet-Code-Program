Given the head of a linked list, remove the nth node from the end of the list and return its head.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    temp =  head;
    if(count - n != 0){
        for(int i = 1; i < count-n; i++){
            temp = temp->next;
        }
        if(temp->next == NULL){
            head = NULL;
            return head;
        }
        else{
            temp -> next =temp->next->next;
            return head;
        }
    }
    else{
        head = temp->next;
        return head;
    }
}
