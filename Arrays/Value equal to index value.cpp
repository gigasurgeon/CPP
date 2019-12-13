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

		bool ind_val=false;

		for(int i=0; i<n; i++)
		{
			if(a[i]==i+1)
			{cout<<a[i]<<" ";
			ind_val=true;			
			}
		
		}

		if(!ind_val)
			cout<<"Not Found";

		cout<<endl;

		

	}


}
