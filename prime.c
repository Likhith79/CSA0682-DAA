#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if (n % i ==0)
	{
	c++;
	}
}
	if (c >= 3) 
	{
	printf("number is not prime number");
	}
	else
	{
    printf("number is a prime number");
	}
	return 0;
}
