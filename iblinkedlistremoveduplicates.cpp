/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* curr=A;
    while(curr!=NULL)
    {
        if((curr->next!=NULL) && (curr->val==curr->next->val))
        {
            ListNode* h1=curr;
            while((curr->next!=NULL) && (curr->val==curr->next->val))
                curr=curr->next;

            curr=curr->next;
            // ListNode* h2=curr;
            h1->next=curr;
        }
        else
        curr=curr->next;
    }

    return A;
}
