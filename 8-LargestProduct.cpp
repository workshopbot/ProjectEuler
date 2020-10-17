#include<iostream>
#include<fstream>
#include"LinkedList.cpp"

long productArray(int[], int);
bool checkZeros(int[], int);



using namespace std;

const int WIDTH = 13;



int main()
{
    int Digits[1000], cursor[WIDTH], numIndex = 0, index;
    long tempProduct = 0, finalProduct = 0;
    bool checkZero;
    ifstream myFile;
    myFile.open("8-thousandDigitNum.txt");

    while(numIndex < 1000)
    {
        if(myFile.is_open())
        {
            myFile >> Digits[numIndex];
            // cout<< "Counter numIndex is at "<< numIndex << " and digits are at " << Digits[numIndex]<<"\n";
            numIndex++;
        }
        else
        {
            cout<<"The file cannot open :( \n";
            break;
        }
        
    }
    myFile.close();
    cout<< "Copied 1000 digits successfully :) \n";
    // Take WIDTH amout of numbers, check for zeros and then if array has no zeros, 
    // then call a function to product the numbers in array

    for(index = 0; index < 1000 ; index++)
    {
        checkZero = checkZeros(Digits, index);
        if(checkZero = true)
        {
            tempProduct = productArray(Digits, index);
            // cout<<"tempProduct is "<<tempProduct<<"\n";

            if(tempProduct > finalProduct)
            {
                finalProduct = tempProduct;
                cout<<"Final Product updated "<<finalProduct<<"\n";
            }
        }
        else
        {
            index = index + WIDTH;
            cout<<"Zero encountered and index updated to "<< index<< "\n";
        }
        
        
    }

    cout<<finalProduct<<endl;
    



    cout<<"\n";
    return 0;
}


bool checkZeros(int arraytoCheck[1000], int _index)
{
    int i;
    for(i = _index ; i < _index + WIDTH ; i++)
    {
        if(arraytoCheck[i] == 0)
        {
            break;
        }
        else
        {
            // cout<<"else block is executed \n";
            continue;
            // return true;
        }
        
    }
    // return false;
    if(i == _index + WIDTH)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

long productArray(int arrayToProduct[], int _index)
{
    long temp = 1;
    for(int i = _index ; i < WIDTH + _index ; i++)
    {
        temp = arrayToProduct[i]*temp;


    }  
    return temp;  
}
