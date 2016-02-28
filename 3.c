



#include<stdio.h>
int prime(long long int i)
{
	long long int j;
	int count=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			count++;}
		}
		if(count==2)
		return(i);
		else return(0);
}
main()
{
	long long int i=2;
	long long int n=600851475143;
	long long int max=-999999999999;
	long long int pnum;
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		pnum=prime(i);
		if(pnum>max)
		{
			max=pnum;
			}
		else max=max;
		}
	printf("%lli",max);
	getch();
	
}

