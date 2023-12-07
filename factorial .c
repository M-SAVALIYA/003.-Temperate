#include<stdio.h>

main()
{
	int i,n,f = 1;
	
	printf("Enter factorial number = ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
	
		f = f * i;
		
	}
	
	printf("The factorial of %d is %d\n",n,f);
}