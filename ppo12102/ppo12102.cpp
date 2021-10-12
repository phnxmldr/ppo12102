#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("hasla.txt");
    string linia;
    do
    {
        getline(myFile, linia);
        cout << linia << endl;

    } while (linia != "");
    myFile.close();
    return 0;
}