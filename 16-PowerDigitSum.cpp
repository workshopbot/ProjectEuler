#include<iostream>
#include<fstream>
#include"gmp.h"


using namespace std;

int main()
{
    int counter = 0, Digits[1000] = {0}, temp = 0, Sum = 0;
    unsigned long int base = 2, power = 100;
    char *numString;
    numString = new char[1000];
    mpz_t PowerDigit;
    mpz_init(PowerDigit);
    



    for(power; power < 1001 ; power++ )
    {
        mpz_ui_pow_ui(PowerDigit, base, power);
        // cout<<power<<"\n";
    }

    gmp_printf("%Zd", PowerDigit);


    // cout<<"\nBefore input, the char array reads \n";
    // for(counter = 0; counter < 500; counter++)
    // {
    //     cout << numToStore[counter];
    // }
    cout << "\n";


    mpz_get_str(numString, 10, PowerDigit);
    cout << "The number was converted to char array, and is " << numString << "\n";
    mpz_clear(PowerDigit);
    
    cout<<"Converting to int array .......\n";
    for(int i = 0 ; i<1000; i++)
    {
        Digits[i] = numString[i] - '0';
        cout << Digits[i] << "\n";
        if(Digits[i] != -48)
        {
            counter++;
        }

    }

    for(int x = 0; x < counter; x++)
    {
        Sum = Digits[x] + Sum;
    }

    cout<<"FINAL ANSWER  " << Sum << "\n";
    cout<<"number of digits = " << counter <<endl;


    
    // ofstream myFile;
    // myFile.open("2RaisedTo1000.txt");

    // if(myFile.is_open())
    // {
    //     myFile << numString;

    // }
    // else
    // {
    //     cout<<"The file could not open \n";
        
    // }  
    // cout<<
    




    cout<<"\n is this line even Exicuted?? \n";
    return 0;
}
