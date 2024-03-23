#include <iostream>
#include <string>
using namespace std;

bool in(const string& str,const char c);

int main()
{
    string str1;
    cout<<"Enter First word: ";
    getline(cin,str1);
    
    string str2;
    cout<<"Enter Second word: ";
    getline(cin,str2);
    
    int count = 0;
    for (char c : str2)
    {
        if (in(str1,c))
        {
            count++;
        }
    }
    
    cout<<"No. of Similar characters found: "<<count;
    return 0;
}

bool in(const string& str,const char c)
{
    for (char x : str)
    {
        if (x == c)
        {
            return true;
            break;
        }
        else
        {
            continue;
        }
    }
    
    return false;
}