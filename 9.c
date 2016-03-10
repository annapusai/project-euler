/*
	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
	
*/

#include<stdio.h>
main()
{
		int a,b,c,i,j,k,p;
		for(i=1;i<1000;i++)
		{
			for(j=2;j<1000;j++)
			{
					for(k=3;k<1000;k++)
					{
						
						if(i<j && j<k)
						{
								if((i*i+j*j)==k*k)
								{
										if(i+j+k==1000)
										{
												p=i*j*k;
												printf("%d",p);
											}
									}
						}
						
						}
				}
			
			}
		
		
		getch();
}
