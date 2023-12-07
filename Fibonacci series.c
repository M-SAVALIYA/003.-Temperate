#include<stdio.h>

main()
{
	int n,i,a=0,b=1,c;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		printf("%d   ",c);
		
		a = b;
		b = c;
		c = a + b;
	}
	
}