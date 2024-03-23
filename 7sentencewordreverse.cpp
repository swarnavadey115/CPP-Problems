#include<iostream>
#include<string>
using namespace std;

string inverse(const string &str);
bool check(char c);

int main()
{
    cout<<"Sentence: ";
    string sentence;
    getline(cin,sentence);

    string result = inverse(sentence);
    cout<<"Result: "<<result;

    return 0;
}

string inverse(const string &str)
{
    string res="";
    
    // logic
    int leng = 0;

    while (str[leng] != '\0')
    {
        leng++;
    }
    int start = 0;

    for (int i = 0; i < leng; ++i)
    {
        if (!check(str[i]))
        {
            string word = str.substr(start, i - start);
            res = word + " " + res;
            
            while (i < leng && !check(str[i]))
            {
                ++i;
            }
            start = i;
        }
    }

    if (start < leng)
    {
        string word = str.substr(start);
        res = word + " " + res;
    }

    return res;
}

bool check(char c)
{
    if((char(c)>64) && (char(c)<123))
    {
        if((char(c)<91) || (char(c)>96))
        {
            return true;
        }
    }

    return false;
}