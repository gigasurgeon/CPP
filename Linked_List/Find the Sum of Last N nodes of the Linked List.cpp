int sumOfLastN_Nodes(struct Node* head, int n)
{
    node *temp=head;
    int len=0;

    while(temp!=NULL)
    {   temp=temp->next;
        len++;
    }

    int sum=0;
    temp=head;
    int current_index=0;

    while(temp!=NULL)
    {  if(len-current_index<=n)
          sum+=temp->data;
    
       temp=temp->next;
       current_index++;
    }

    return sum;
}
