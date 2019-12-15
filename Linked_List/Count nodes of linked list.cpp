int getCount(struct Node* head)
{
    Node *tmp=head;
    int n=0;

    while(tmp!=NULL)
    {
        tmp=tmp->next;
        n++;
    }

    return n;
}
