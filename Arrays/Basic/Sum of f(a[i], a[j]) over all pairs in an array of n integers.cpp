#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {   int n;
        cin>>n;
        int a[n];
    
        for(int i=0; i<n;i++)
            cin>>a[i];

        int sum=0;

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
                {
                    int dif= a[j]-a[i];

                    if(dif<-1 || dif>1)
                        sum+= a[j]-a[i];

                    else if(dif>=-1 && dif<=1)
                        sum+=0;
                }

            }
 
            cout<<sum<<endl;
    }
}
