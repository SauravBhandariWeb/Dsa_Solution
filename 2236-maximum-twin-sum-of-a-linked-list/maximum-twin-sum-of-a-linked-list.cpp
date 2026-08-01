class Solution {
public:
    int pairSum(ListNode* head) {
        vector<ListNode*> vl;
        int ans=INT_MIN;
        while(head){
            vl.push_back(head);
            head=head->next;
        }
        int i = 0, j = vl.size() - 1;
        while (i <= j) {
        ans=max(ans,(vl[i]->val+vl[j]->val));
        i++;j--;
        }
    return ans;
    }
};