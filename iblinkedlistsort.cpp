
 ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
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

ListNode* Solution::sortList(ListNode* A) {

    if(A==NULL)
    return NULL;
    ListNode *head=A;
      if(!head || !head->next) return head;
    // get middle node
    // not right if write: *fast = head. Otherwise, {2,1} will not be sorted.
    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *left = head, *right = slow->next;
    slow->next = NULL;
    left = sortList(left);
    right = sortList(right);

    return mergeTwoLists(left, right);

  //ANOTHER METHOD TO FIND MID//
//     int len=0;
//     ListNode *curr=A;
//     while(curr!=NULL)
//     {
//         curr=curr->next;
//         len++;
//     }
//     int m=len/2;
//     if(len%2!=0)
//     m=m+1;
//     ListNode *pt1=A,*pt2=NULL;
//     curr=A;
//     int pos=1;
//     while(curr!=NULL)
//     {
//         if(pos==m)
//         {
//             pt2=curr->next;
//             curr->next=NULL;
//             break;
//         }
//         curr=curr->next;
//         pos++;
//     }
//   pt1=sortList(pt1);
//   pt2=sortList(pt2);





//   ListNode *ans=mergeTwoLists(pt1,pt2);

//     return ans;

}


/*
ListNode *mergeSort(ListNode *head) {
    if(!head || !head->next) return head;
    // get middle node
    // not right if write: *fast = head. Otherwise, {2,1} will not be sorted.
    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *left = head, *right = slow->next;
    slow->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
}

ListNode *merge(ListNode *L, ListNode *R) {
    if(!L) return R;
    if(!R) return L;
    ListNode *h = NULL;
    if(L->val < R->val) {
        h = L;
        h->next = merge(L->next, R);
    } else {
        h = R;
        h->next = merge(L, R->next);
    }
    return h;
}*/
