int PalinArray(int a[], int n)
{  
	for(int i=0; i<n; i++)
	{
		
		if(a[i]>9 && a[i]<100)
		{
			if(a[i]/10 != a[i]%10)
				return 0;
		}
		
		else if(a[i]>99 && a[i]<1000)
		{
			if(a[i]/100 != a[i]%10)
				return 0;	
		}
		
		else if(a[i]>999 && a[i]<10000)
		{	if(a[i]/1000 != a[i]%10 || (a[i]/100)%10 != (a[i]%100)/10)
				return 0;
		}
		
		else if(a[i]== 10000)
				return 0;
			
		
	}
	
	return 1;

}
    