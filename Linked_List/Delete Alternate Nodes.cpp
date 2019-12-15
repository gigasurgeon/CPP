void deleteAlt(struct Node *head)
{

    Node* temp=head;

    while(temp!=NULL)
    {
        if(temp->next==NULL)
            break;

        temp->next=temp->next->next;
        temp=temp->next;
    }



}
