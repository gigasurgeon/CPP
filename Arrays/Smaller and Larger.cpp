#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	int n,x;
	cin>>n>>x;
	
	int a[n];
	for(int i=0; i<n;i++)
		cin>>a[i];
	
	int lesser=0,greater=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<= x)
			lesser++;
		
		if(a[i]>=x)
			greater++;
		
	}
	cout<<lesser<<" "<<greater<<endl;
	}
}