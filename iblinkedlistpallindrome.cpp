/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* reverseList(ListNode* A) {
    if(A==NULL)
        return A;

    ListNode *p=NULL;
    ListNode *q=A;
    ListNode *r=A;
    while(q!=NULL) {
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }
    A=p;
    return A;
}

int Solution::lPalin(ListNode* A) {
    ListNode *newlist=NULL,*curr=A,*p;

    while(curr!=NULL){
        ListNode* node=new ListNode(curr->val);
        if(newlist==NULL)
         {
                 newlist=node;
            //     p=newlist;
         }
         else
           {
               p->next=node;
           }

         p=node;
        curr=curr->next;
    }
    ListNode* revlist=reverseList(A);
    while(revlist!=NULL && newlist!=NULL){
        if(revlist->val!=newlist->val)
        return 0;

        revlist=revlist->next;
        newlist=newlist->next;
    }
    return 1;
}

