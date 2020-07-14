/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {

    ListNode* curr=A;
    int len=0;
    while(curr!=NULL)
    {     len++;
        curr=curr->next;
    }
    curr=A;
    ListNode*newhead=curr;
    int pos=len-B,i=0;

    if(pos==len)
    pos=len-1;
    if((pos==0) || (B>len))
     {
        A=A->next;
        return A;
     }

    while(curr!=NULL){
        if(i>pos)
        break;

        if(i==pos-1)
        curr->next=curr->next->next;

        curr=curr->next;
        i++;
    }
    return newhead;
}

