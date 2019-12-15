int isLengthEvenOrOdd(struct Node* head)
{
    Node* temp=head;
    int n=0;

    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }

    if(n%2==0)
        return 0;

    else
        return 1;

}
