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
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		int max=a[0];
		
		for(int i=0; i<n;i++)
			max=max<a[i]?a[i]:max;
		
		cout<<max<<endl;
	}
}