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
		
		int min=a[0], max=a[0];
		
		for(int i=0;i<n;i++)
		{
			min=min>a[i]?a[i]:min;
			max=max<a[i]?a[i]:max;
		}
		
		cout<<max<<" "<<min<<endl;
		
	}
	
}