#include<stdio.h>
int palindrome(int n)
{
	int i,rev=0,rem;
	i=n;
	while(i!=0)
	{
		rem=i%10;
		rev=rev*10+rem;
		i=i/10;
		}
	if(rev==n)
	{
		return(n);
	}
	else return(0);
	
}
main()
{
	int i,j,palin,num,max=-1;
	for(i=999;i>800;i--)
	{
		for(j=i;j>800;j--)
		{
			palin=i*j;
			num=palindrome(palin);
			if(num>max)
			{
				max=num;
				}
				else max=max;
			}
	}	
			
		printf("%d",max);
		getch();
}

