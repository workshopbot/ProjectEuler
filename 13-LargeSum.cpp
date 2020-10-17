#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int sum[50] = {0}, carry;
    char Digits[50][100];

    ifstream myFile;
    myFile.open("FiftyDigitNums.txt");

    int position = 0, index = 0;
    while (!myFile.eof())
    {

        if (myFile.is_open())
        {

            myFile >> Digits[position][index];

            position++;
            if (position == 50)
            {
                position = 0;
                index++;
            }
        }
        else
        {
            cout << "The file cannot open :( \n";
            break;
        }
    }
    // Checking if the numbers were inserted correctly
    // for (index = 0; index < 100; index++)
    // {
    //     for (position = 0; position < 50; position++)
    //     {
    //         cout << Digits[position][index];
    //     }
    //     cout << "\n";
    // }

    // This loop does the work of adding the digits with the same decimal place value
    for (position = 0; position < 50; position++)
    {
        for (index = 0; index < 100; index++)
        {
            sum[position] = Digits[position][index] + sum[position] - 48;
            if (position == 0)
            {
                // cout << sum[position] << "\n";
            }
        }
    }

    // The Sum[] array stores the column wise sum of out numbers
    // This loop performs the carry operation
    int counter = 50;
    while (counter != 0)
    {
        counter--;
        carry = floorf(sum[counter] / 10);
        sum[counter - 1] = sum[counter - 1] + carry;
    }

    cout << "\n";

    // printing out the number
    for (int itterator = 0; itterator < 50; itterator++)
    {
        sum[itterator + 1] = sum[itterator + 1] % 10;
        cout << sum[itterator] << " ";
    }

    cout << "\nCompleted Execution\n";
}