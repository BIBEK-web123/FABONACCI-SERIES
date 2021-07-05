#include<stdio.h>
int main()
{
	int a,b,c,n,sum;
	printf("\n\t***FIBONACCI SERIES***\n");
	printf("\nEnter the nth term:");
	scanf("%d",&n);
	printf("\n\t***USING FOR LOOP***\n");
	a=0;
	b=1;
	c=1;
	printf("\nThe series is:");
	for(c=1;c<=n;c++)
	{
		sum=a+b;
		b=a;
		a=sum;
		printf("%d,",b);
	}
	printf("\b ");
	printf("\n");
	printf("\n\t***USING WHILE LOOP***\n");
	a=0;
	b=1;
	c=1;
	printf("\nThe series is:");
	while(c<=n)
	{
		sum=a+b;
		b=a;
		a=sum;
		printf("%d,",b);
		c++;
	}
	printf("\b ");
	printf("\n");
	printf("\n\t***USING DO WHILE LOOP***\n");
	a=0;
	b=1;
	c=1;
	printf("\nThe series is:");
	do
	{
		sum=a+b;
		b=a;
		a=sum;
		printf("%d,",b);
		c++;
	}while(c<=n);
	printf("\b ");
	printf("\n");
    return(0);
}
