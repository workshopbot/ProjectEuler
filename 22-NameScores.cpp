#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string singleName;
    vector<string> Names;
    char cursor;
    ifstream myFile;
    myFile.open("names.txt");

    while (!myFile.eof())
    {

        if (myFile.is_open())
        {

            myFile >> cursor;

            if (cursor == '"')
            {
                continue;
            }
            else if (cursor == ',')
            {
                Names.push_back(singleName);
                break;
                // singleName = "";
            }
            singleName = cursor + singleName;
            cout << " " << singleName << " ";
        }
        else
        {
            cout << "The file cannot open :( \n";
            break;
        }
    }
    cout << "\n";
}
