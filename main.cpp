//A driver program that demostrates the use of the mystoi function.
#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void input(string& s);
//Reads a number into string s.

int mystoi(string& s);
//Converts a string representation of a decimal number to a literal 
//decimal number.

int main()
{
    string s;

    input(s);
    cout<<"String \""<<s<<"\" has been converted to the integer "<<mystoi(s)<<endl;

    return 0;
}

void input(string& s)
{
    cout<<"Enter an integer ";
    cin>>s;
}

int mystoi(string& s)
{
    int integer = 0, multipleOfTen = 1; 
    for (int i = s.length() - 1; i >= 0; i--)
    {
        integer += (multipleOfTen * (s[i] - 48));
        multipleOfTen *= 10;
    }

    /*
       for (int i = 0; i < s.length(); i++)
       {
       int sumOfPlaceValues = 0;
       for (int j = 1; j <= i; j++)
       {
       sumOfPlaceValues += ((integer % 10) * pow(10.0,j));
       integer = integer/10;
       }
       integer = sumOfPlaceValues + (s[i] - 48);
       }
       */
    return integer;
}
