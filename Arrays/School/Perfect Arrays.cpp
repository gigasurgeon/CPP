#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
    
        int a[n];

        for(int i=0; i<n;i++)
        cin>>a[i];

        bool isreverse=true;

        for(int i=0, j=n-1; i<=n/2, j>n/2 +1; i++,j--)
            if (a[i]!=a[j]) 
            isreverse=false;

        if(!isreverse)
        cout<<"NOT PERFECT"<<endl;

        else
        cout<<"PERFECT"<<endl;   
}

}
