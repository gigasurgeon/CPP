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
		
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		int temp;
		
		for(int i=0; i<n; i++)
		{
		for(int j=0; j<n-1-i; j++)
		{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					
				}
		}
		}
	
		for(int i=0; i<n-2; i++)
			cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	
}