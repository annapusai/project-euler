/*The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/



#include<stdio.h>
main()
{
	
	int i,s1=0,s2=0,s3,d;
	for(i=1;i<101;i++)
	{
		s1=s1+i*i;
		s2=s2+i;
		
	}
	s3=s2*s2;
	d=s3-s1;
	printf("%d",d);
	
	
	getch();
}
