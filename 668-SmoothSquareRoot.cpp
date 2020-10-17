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
    unsigned long int LargestPrimeFactors(unsigned long int Number)
    {
        for (unsigned long int i = 0; i < floor(sqrt(Number)); i)
    }
};

int main()
{
    Factors factors;
    unsigned long int sum = 0, temp = 0, i = 1, root = 0;
    for (i; i < 10000; i = 2 * i + 1)
    {
        factors.
    }
}