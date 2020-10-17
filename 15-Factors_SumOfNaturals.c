#include<stdio.h>
#include<math.h>
long long sumNatural();
long long No_factors();
int main()
{
//	printf("Enter the Number for its sequence sum and tne number of factors  ");
	long long sum , user_num = 0, num_factors;
	int itt = 0;
//	scanf("%d",&user_num);
	while(num_factors<=501)
	{
		itt++;
		user_num++;
		sum = sumNatural(user_num);
		num_factors = No_factors(sum);
//		if(itt%200==0)
//		{
//			printf("itt %d )) The Sum is  %lld and the Number of factors it has is %lld\n",itt, sum , num_factors);
//		}
	}
	printf(" Itteration %d )) The Sum is  %lld and the Number of factors it has is %lld\n",itt, sum , num_factors);
	
//		printf("\nThe sum of first %d Natural Numbers is  %d",n,sum);
}
	
	
long long sumNatural(long long userNum_fn)
{
	long long sum_fn = 0 ,n_fn;
	for(n_fn=1 ; n_fn <= userNum_fn  ; n_fn++)
	{
		sum_fn = n_fn + sum_fn;
	}	
	return sum_fn;
}

long long No_factors(long Num)
{
	long long n , factors_counter = 0;
	for(n = 1 ; n<=floor(sqrt(Num)) ; n++)
	{
		if(Num%n==0)
		{
			factors_counter++;
		}
		
	}
	return 2*factors_counter;
	
	
	
}
