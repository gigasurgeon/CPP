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
		
		int sum=0;
		
		for(int i=1; i<=n; i++)
			sum+=i;
		
		cout<<sum<<endl;
		
	}
	
}