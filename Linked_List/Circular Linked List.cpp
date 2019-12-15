
bool isCircular(Node *head)
{
    Node *tmp=head;
    int reps=0;

    if(head==NULL)
       return true;

    while(tmp!=NULL)
    {   if(tmp==NULL || tmp->next==NULL)
            return false;
    
        reps++;
        tmp=tmp->next;
         if(tmp==head && reps>0)
             return true;
        
    }
    return true;

}
