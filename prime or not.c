#include<stdio.h>

main()
{
	int i,n,count = 0;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		if(n % i == 0)
		{
			count++;
		}
		
	}
	
	if(count == 2)
	{
		
		printf("%d is prime Number",n);
		
	}
	else
	{
		
		printf("%d is not prime Number",n);
		
	}
}