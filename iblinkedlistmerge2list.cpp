/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* newlist=NULL,*h=NULL;
    ListNode *pt1=A,*pt2=B;

    while(pt1!=NULL && pt2!=NULL)
    {

       if(pt1->val<pt2->val)
       {
            if(newlist==NULL)
            {
                newlist=pt1;
                h=pt1;
            }
            else
            {
                h->next=pt1;
                h=pt1;
            }

            pt1=pt1->next;
        }

        else
        {
            if(newlist==NULL)
            {
                newlist=pt2;
                h=pt2;
            }
            else
            {
                h->next=pt2;
                h=pt2;
            }

            pt2=pt2->next;
        }


    }

    while(pt1!=NULL){
        h->next=pt1;
        h=pt1;
        pt1=pt1->next;
    }
    while(pt2!=NULL){
        h->next=pt2;
        h=pt2;
        pt2=pt2->next;
    }
    ListNode*curr=newlist;


    return newlist;
}

