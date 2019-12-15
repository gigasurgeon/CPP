bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *tmp1=head1;
    Node *tmp2=head2;

    while(tmp1!=NULL || tmp2!=NULL)
    {
        if(tmp1->data!=tmp2->data)
            return false;

        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }

    return true;
}
