#include<stdio.h>
//int loopEven();
//int loopOdd();

long long Collatz(int);

int main()
{
	int i;
	int maxCount = 0, maxNum = 0;
	int temp;

	for(i = 13; i <= 1000000; i++)
	{
		temp = Collatz(i);
		if(temp > maxCount)
		{
			maxCount = temp;
			maxNum = i;
		}
		if(i % 200 == 0){
			printf("%d\n", i);
		}
	}
	
//	for(i = 113200; i <= 113400; i++)
//	{
//		temp = Collatz(i);
//		if(temp > maxCount)
//		{
//			maxCount = temp;
//			maxNum = i;
//		}
//		if(i % 200 == 0){
//			printf("%d\n", i);
//		}
//	}

	printf("Max count : %d\n", maxCount);
	printf("Number which had max count : %d\n", maxNum);
	
//	printf("%d", Collatz(113383));

}

long long Collatz(int num)
{
	long long n = num;
	int count = 0;
	while(n != 1)
	{
		// printf("%lld--->", n);
		if(n % 2 == 0)
		{
			n = n/2;
		}
		
		else
		{
			n = 3*n + 1;
		}
		count++;
		
	}
//	printf("%d\n", n);
	return count;
}
