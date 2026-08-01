
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* l=head;
        ListNode* r=head;
        ListNode* m=head;
        int c=1;
        while(m){
            if(c<k)l=l->next;
            if(c>k)r=r->next;
            m=m->next;
            c++;
        }
        swap(l->val,r->val);
        return head;
    }
};