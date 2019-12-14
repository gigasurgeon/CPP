#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		int temp= a[k-1];
		a[k-1]=a[n-k];
		a[n-k]=temp;
		
		for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
}