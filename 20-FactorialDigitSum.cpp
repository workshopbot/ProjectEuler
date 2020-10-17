#include<iostream>
// #include<fstream>
#include"gmp.h"

using namespace std;

int main()
{
    int SIZE = 0, Sum = 0;
    unsigned long int num = 100;
    mpz_t factorial;
    mpz_init(factorial);


    mpz_fac_ui(factorial, num);
    gmp_printf(" 100! is , \n%Zd\n", factorial);


    SIZE = __gmpz_sizeinbase(factorial, 10);
    cout << "Number of digits == " << SIZE << "\n";


    char* numString;
    int Digits[SIZE] = {0};
    numString = new char[SIZE];


    mpz_get_str(numString, 10 ,factorial);



    for(int i = 0 ; i < SIZE ; i++)
    {
        Digits[i] = numString[i] - '0';
        if(Digits[i] == -48)
        {
            break;
        }
        // cout << Digits[i] << "\n";
        Sum = Sum + Digits[i];

    }

    cout << "The sum is, "<< Sum <<endl;

    








    cout << "\nExecuted Successfully\n";
}