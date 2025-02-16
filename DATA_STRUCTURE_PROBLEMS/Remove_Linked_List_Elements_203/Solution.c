/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
   
    while(head !=NULL && head->val==val  )
    {
        head=head->next;
    }
    struct ListNode* current=head,*prev=NULL,*temp=NULL;

    while(current!=NULL)
    {
        if (current->next != NULL && current->next->val == val) {
            current->next = current->next->next;  // Remove the node
        } else {
            current = current->next;  // Move only if no deletion
        }
    }
        
    
    return head;
}
