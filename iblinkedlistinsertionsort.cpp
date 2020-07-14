/*void insert(ListNode* curr, ListNode* node)
{
    int t1;
    int t2;
    t1=node->val;
    node->val=curr->val;

    node=node->next;
    while(node!=curr)
    {
        t2=node->val;
        node->val=t1;
        t1=t2;
        node=node->next;
    }
    node->val=t1;
}

ListNode* Solution::insertionSortList(ListNode* A) {

    if(A==NULL||A->next==NULL)
        return A;

    ListNode* node;
    ListNode* curr=A->next;

    while(curr!=NULL)
    {
        node=A;
        while(node!=curr)
        {
            if(node->val>curr->val)
            {
                insert(curr, node);
                break;
            }
            node=node->next;
        }
        curr=curr->next;
    }

    return A;
}*/
