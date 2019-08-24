#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

int main(){

    string myString = "I am Raunak Sharma .This is my first try to do file handling in c plus plus . Thank god , the program ran!!";

    ofstream writer("fileIO.txt");

    if (! writer)
    {
        cout << "Error opening file"<< endl;
        return -1;
    }
    else
    {
        writer << myString << endl;
        writer.close();
    }
    
    char letter;

    ifstream reader("fileIO.txt");

    if (! reader)
    {
        cout << "Error reading file"<< endl;
        return -1;
    }
    else
    {
        for(int i = 0;!reader.eof();i++){

                reader.get(letter);
                cout << letter;

        }
        cout << endl;
        reader.close();
    }

    
}