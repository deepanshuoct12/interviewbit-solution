/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    if(A==NULL)
    return NULL;

    ListNode *curr=A,*f1=NULL,*l1=NULL,*f2=NULL,*l2=NULL;
    while(curr!=NULL){
     //   cout<<curr->val;
        if(curr->val>=B)
        {
            if(f2==NULL)
            {
                f2=curr;
                l2=curr;
            }
            else
            {
                l2->next=curr;
                l2=curr;
            }

        }
         else
        {
            if(f1==NULL)
            {
                f1=curr;
                l1=curr;
            }
            else
            {
                l1->next=curr;
                l1=curr;
            }
         //   cout<<l1<<":";
        }

        curr=curr->next;
    }
    if(l1!=NULL)
    l1->next=f2;
    if(l2!=NULL)
    l2->next=NULL;

    if(f1==NULL)
    return f2;

    return f1;
}

