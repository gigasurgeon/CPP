int findMax(Height arr[], int n)
{
        int sum=0;

    for(int i=0; i<n; i++)
    {
        sum = sum>(arr[i].feet*12)+arr[i].inches ? sum: (arr[i].feet*12)+ arr[i].inches;
    }

    return sum;

}
