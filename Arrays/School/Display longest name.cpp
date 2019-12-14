#include <iostream>
using namespace std;

int find_len(string a)
{
	int len=0;
	
	while(a[len]!='\0')
		len++;
	
	return len;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		string a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		int max_len=find_len(a[0]);
		int max_ind=0;
		for(int i=0; i<n; i++)
		{
			if(max_len< find_len(a[i]))
			{	max_len=find_len(a[i]);
				max_ind=i;				
			}
						
		}
		
		cout<<a[max_ind]<<endl;
		
	}
	
	
}