#include<iostream>
#include<string>
using namespace std;

int stringtoint(const string &str);

int main()
{
    string str;
    cout<<"Enter number: ";
    getline(cin,str);

    int number = stringtoint(str);
    cout<<number;


    return 0;
}

int stringtoint(const string &str)
{
    int num = 0;
    for(char c : str)
    {
        num *= 10;
        num += (c-'0');
    }

    return num;
}