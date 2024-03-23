#include<iostream>
#include<string>
using namespace std;

bool issame(const string& str1, const string& str2);
int len(const string& str);

int main()
{
    cout<<"Word1= ";
    string w1, w2;
    getline(cin,w1);
    cout<<"Word2= ";
    getline(cin,w2);

    bool result = issame(w1,w2);
    cout<<result;
    return 0;
}

int len(const string& str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

bool issame(const string& str1, const string& str2)
{
    if (len(str1)!=len(str2))
    {
        return false;
    }
    string answer;

    int ptr = 0;
    while ((str1[ptr] != str2[0]) && (str1[ptr] != '\0'))
    {
        ptr++;
    }

    if (ptr==len(str1))
    {
        return false;
    }

    for (int i=ptr; i<len(str1); i++)
    {
        answer = answer + str1[i];
    }

    for (int j=0; j<ptr; j++)
    {
        answer = answer + str1[j];
    }

    if (answer == str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
