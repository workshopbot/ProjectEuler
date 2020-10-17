#include<iostream>
#include"gmp.h"



using namespace std;

int main()
{
    unsigned long int num = 1;
    mpz_t Sum, TempSum;
    mpz_init_set_ui(Sum, 0);
    mpz_init_set_ui(TempSum, 0);

    gmp_printf("\nSum and Tempsum initialized to, %Zd and %Zd respectively\n", Sum, TempSum);


    for(int i = 0; i < 1000; i++)
    {

        mpz_ui_pow_ui(TempSum, num, num);
        mpz_add(Sum, Sum, TempSum);
        num++;
    }

    cout<<"Value of num is ==" << num;
    gmp_printf("Final Summation amounts to, \n%Zd", Sum);



    cout<<"\nExecuted Successfully\n";
    // Set 

}







