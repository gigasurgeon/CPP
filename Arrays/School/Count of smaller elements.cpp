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
		
		int count=0;
		
		for(int i=0; i<n; i++)
		{
			if( a[i]<=x)
				count++;
		}
		
		cout<<count<<endl;
	}
	
}