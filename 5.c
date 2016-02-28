/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

#include<stdio.h> 
#include<conio.h>
main()
{
		
		int i=1,count,j,k,flag;
		do
		{
			count=0;
				for(j=1;j<21;j++)
				{
					k=i%j;
					if(k==0)
					{
						count++;	
					}
					if(count==20)
					{
						printf("%d",i);	
						flag=1;
					}
					
				}
				i++;
			if(flag==1)
				break;
		}while(i>0);
		getch();
}


