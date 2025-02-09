/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        ListNode temp=head;
        int count=0;
        while(temp!=null)
        {
            temp=temp.next;
            count++;
        }
        if(count==1&& n==1)
        return null;
        if(count==n)
        return head.next;
       
        ListNode prev=head,current=head;
        for(int i=1;i<count-n+1;i++)
        {
        prev=current;
        current=current.next;
        }
        prev.next=current.next;
        return head;

       
    }
}
