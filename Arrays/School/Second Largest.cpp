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
		int temp;
		
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		for(int i=0; i<2; i++)
		{for(int j=0; j<n-1; j++)
			{
				if(a[j]>a[j+1])
				{
					temp= a[j];
					a[j]=a[j+1];
				    a[j+1]=temp;
				}
				
			}
		}
		
		cout<<a[n-2]<<endl;
	}	
	
}