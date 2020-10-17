#include<iostream>
#include<gmp.h>


using namespace std;


int main()
{
    int SIZE;
    unsigned long int itterator = 1;
    mpz_t fibbonacci;
    mpz_init(fibbonacci);

    mpz_set_ui(fibbonacci, itterator);

    while (SIZE < 1000)
    {
        SIZE = __gmpz_sizeinbase(fibbonacci, 10);
        mpz_fib_ui(fibbonacci, itterator);
        cout << "Index is == " << itterator << "\n";
        gmp_printf(" and Fibb is %Zd", fibbonacci);
        cout<<"\n";
        itterator++;

        
    }
    


    






    cout<<"\nExecuted Successfully\n";
}