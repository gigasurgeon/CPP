#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];

	for(int i=0; i<n; i++)
		cin>>a[i];
	
	bool sorted=true;
	
	for(int i=0;i<n;i++)
	{
		if(!a[i]<=a[i+1])
		{sorted= false;
			break;}
		
	}
	
	
	if (sorted)
		cout<<1<<endl;
	
	else
		cout<<0<<endl;
}