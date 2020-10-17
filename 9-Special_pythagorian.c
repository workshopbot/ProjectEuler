#include<stdio.h>
#include<math.h>
float main()
{
	float a , b , c, sum ,product;
	
//	printf("%d",c);
	for(a=1 ; a<1000 ; a++)
	{
		for(b=1 ; b<1000 ; b++)
		{
			c = sqrt(a*a + b*b);
			sum = a + b + c;
			if(sum == 1000){
				printf("\n%f  %f   %f   %f",sum,a,b,c);
				product = a*b*c;
				printf("The final product of a,b,c is %f",product);
			}
			
		}
	}


}
