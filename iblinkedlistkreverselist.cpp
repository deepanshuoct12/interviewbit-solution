/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* Reverse(ListNode* A) {
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
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(A==NULL)
    return NULL;

    ListNode *curr=A,*p=A,*l=NULL,*prev=NULL;
    int pos=1;
    while(curr!=NULL){

        if(pos%B==0)
        {
            l=curr;
            curr=curr->next;
            l->next=NULL;
            p=Reverse(p);
            l=p;
            while((l!=NULL) && (l->next!=NULL))
            l=l->next;

            if(prev==NULL)
             {
                 prev=l;
                 A=p;
             }
            else if(prev!=NULL)
            {
                prev->next=p;
                prev=l;
            }

          p=curr;
        }
        else
        curr=curr->next;

        pos++;
    }

    return A;
}
