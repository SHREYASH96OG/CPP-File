#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("Shreyash.txt");
    file << "Shreyash Is Good In Programming As Well As In Cricket.";

    file.close();

    string str;
    ifstream fileop("Shreyash.txt");
    while(getline(fileop,str)){
        cout<<str;
    }
    file.close();
    return 0;

}