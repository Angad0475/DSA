class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next_next=NULL;
        while(curr!=NULL){
            next_next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_next;

        }
        head=prev;
        return head;
    }
};
