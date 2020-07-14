/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode*curr=A;
    ListNode*prev=NULL;

    while(curr!=NULL){

        if((curr->next!=NULL) && (curr->val==curr->next->val))
        {
             while((curr->next!=NULL) && (curr->val==curr->next->val))
                curr=curr->next;

            curr=curr->next;
            if(prev==NULL)
            {
              if((curr!=NULL && curr->next!=NULL ) && (curr->val==curr->next->val))
                  {
                      prev=NULL;
                  }
                else
                {
                    prev=curr;
                    A=prev;
                }
            }

            else
            {
                prev->next=curr;

            }
        }

        else
        {
            prev=curr;
            if(curr!=NULL)
            curr=curr->next;
        }
    }
    if(prev==NULL)
    return NULL;

    return A;
}

