#include <iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a[3],b[3];
		
		for(int i=0;i<3;i++)
			cin>>a[i];
		
		for(int i=0; i<3; i++)
			cin>>b[i];
		
		int ca=0, cb=0;
		
		for(int i=0; i<3; i++)
		{
			if (a[i]>b[i])
				ca++;
			
			else if (a[i]<b[i])
				cb++;
			
		}
		cout<<ca<<" "<<cb<<endl;
		
	}
	
}