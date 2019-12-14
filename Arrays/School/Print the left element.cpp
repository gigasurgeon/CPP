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
		int min=a[0], max=a[0];
		int minindex=0, maxindex=0;
		
		for(int j=0; j<n; j++)
		{
		for(int i=0; i<n-1-j; i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i]= a[i+1];
				a[i+1]= temp;
			}	
			
		}
		}
		cout<<a[(n-1)/2]<<endl;
		
	}

}