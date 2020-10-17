#include<stdio.h>
#include<math.h>
long long checkPrime();
long long main()
{
	long long user_num , n ,i = 1 ,sum = 2;
//	printf("Enter Number to check if it is prime  :");
//	scanf("%d", &user_num);
	for(user_num=3 ; user_num<2000000; user_num++)				// Automation of user_num to check all numbers according to requirement
	{
		n = checkPrime(user_num);
	if(n==0)													// Checks the return value 1 or 0 for prime or not prime
	{
		i++;
		sum = user_num + sum;									// Ideally create another function to perform and return the sum					
//		printf("The Number %lld is the %lld th Prime and the sum upto is %lld \n",user_num,i,sum);
		
//		if(i==10001)
//		break;
	}
//	printf("The Number %lld is the %lld th Prime and the sum upto is %lld \n",user_num,i,sum);
//	else{
//		printf("The Number is not Prime\n");
//	}
	}
	printf("The Number %lld is the %lld th Prime and the sum upto is %lld \n",user_num,i,sum);
	
	
	

}

long long checkPrime(long long user_numfn)
{
	long long counter , f = 0;
	if(user_numfn%2!=0)
	{
		for(counter=2 ; counter<=sqrt(user_numfn); counter++)			// f is the flag or return value ?
		{																		
			if(user_numfn%counter==0){
				f=1;
			break;	
			}
		}	
	
		return f;
	}
	else {
		return 1;
	}
	
	
}
