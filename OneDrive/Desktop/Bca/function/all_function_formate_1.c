/*Difining all funtion formate using funtion*/
#include<stdio.h>
#include<conio.h>
void isprime();
void isprime1(int);
int isprime2();
int isprime3(int);
void main()
{
	int n,k;
	isprime();
	printf("\nEnter a number:-");
	scanf("%d",&n);
	
	isprime1(n);
	
	k=isprime2();
	if(k==1)
		printf("\nPrime");
	else
		printf("\nNot prime");
		
	k=isprime3(n);
	if(k==1)
		printf("\n%d is prime",n);
	else
		printf("\n%d is not prime",n);	
}
void isprime()
{
	int n,flag=1,i;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
		if(flag==1)
			printf("\n%d is prime",n);
		else
			printf("\n%d is not prime",n);	
	
}
void isprime1(int n)
{
	int flag=1,i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
			if(flag==1)
				printf("\n%d is prime",n);
			else
				printf("\n%d is not prime",n);
}
int isprime2()
{
	int n,flag=1,i;  
	printf("\nEnter a number:-");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int isprime3(int n)
{
	int flag=1,i;
	for(i=2;i<=n/2;i++)
	
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

