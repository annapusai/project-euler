/*
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include<stdio.h>
main()
{
	int i=2,j,count,s=0,flag ;
	
	do
	{ count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			
			}
		}	

				if(count==2)
			{
				s++;
			}
			if(s==10001)
			{
				printf("%d",i);
				flag=1;
				}
			if(flag==1)
			break;
	i++;		
	}while(i>=2);
	

	getch();
}
