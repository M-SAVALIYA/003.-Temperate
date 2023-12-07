#include<stdio.h>

main()
{
	int n,ld,fd,sum;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	while(n>=10)
	{
		n = n / 10;
		
	}
	
	fd = n;
	sum = fd + ld;
	
	printf("Sum of first & last digit = %d",sum);
	
}