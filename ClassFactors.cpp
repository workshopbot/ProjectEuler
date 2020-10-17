#include <iostream>
#include <math.h>
using namespace std;

// template <class DataType>
class Factors
{
private:
public:
    bool isPrime(unsigned long int userNum)
    {
        if (NumOfPrimeFactors(userNum) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    unsigned long int Numofdivisors(unsigned long int userNum)
    {
        unsigned long int i, counter = 0, limit;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (userNum % i == 0)
            {
                counter++;
            }
        }
        return counter;
    }
    int NumOfPrimeFactors(unsigned long int userNum)
    {
        unsigned long int i, counter = 0, limit, temp;
        temp = userNum;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (temp % i == 0)
            {
                counter++;
                temp = temp / i;
                cout << temp << "\t" << i << "\n";

                if (temp == 1)
                    break;
            }
        }
        return counter;
    }

    unsigned long int SumOfdivisors(unsigned long int userNum)
    {
        unsigned long int i, temp = 0, limit, sum = 1;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (userNum % i == 0)
            {
                temp = userNum / i;
                sum = temp + sum;
            }
        }
        return sum - userNum;
    }
    // unsigned long int LargestFactor(unsigned long int userNum)
    // {}
    // unsigned long int SumOfPrimeFactors()
    // {}
    // unsigned long int LargestPrimeFactors()
    // {}
};

// int main()
// {
//     int sumDivisors, userNum;
//     int counter = 0;
//     // cout<<"Enter Number ";
//     // cin>>userNum;
//     Factors Call;
//     // sumDivisors = Call.SumOfdivisors(userNum);
//     for(int userNum = 1 ; userNum < 28124 ; userNum++)
//     {
//         sumDivisors = Call.SumOfdivisors(userNum);
//         if(sumDivisors > userNum)
//         {
//             // abundant numbers entering condition int the varible userNum
//             // counter++;    //counts the number of abundant numbers upto required limit, required for static array :(
//             int Abundant[6965], i=0;
//             Abundant[i] = userNum;

//         }
//             // cout<<counter<<"\n";

//     }

// }
// void Primefactors()
// {

// }
