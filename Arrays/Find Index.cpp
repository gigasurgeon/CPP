#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		
		int n,x;
		cin>>n;
		int a[n];
		
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		cin>>x;
		bool found = false;
		
		for(int i=0; i<n; i++)
		{
			if(a[i]==x)
			{found = true;
			cout<<i<<" ";
			break;}
		}
		
		
		if(found)
		{
			for(int i=n-1; i>=0; i--)
			{
				if(a[i]==x)
				{
					cout<<i<<endl;
					break;	
				}	
			}
		}
		
		
		if(!found)
			cout<<-1<<endl;
		
	}
	
}