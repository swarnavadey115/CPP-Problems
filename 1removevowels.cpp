#include<iostream>
#include<string>
using namespace std;

string res(const string& str1);
bool isvowel(char c);

int main()
{
    string english;
    getline(cin, english);
    
    string result = res(english);
    cout << result;
    
    return 0;
}

bool isvowel(char c)
{
    if ((c == 'a') || (c == 'e') || (c == 'o') || (c == 'i') || (c == 'u') ||
        (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string res(const string& str1)
{
    int x = 0;
    while (str1[x]!='\0')
    {
        x++;
    }
    string answer;
    
    for(int i = 0; i < x; i++)
    {
        if (!isvowel(str1[i]))
        {
            answer = answer + str1[i];
        }
    }
    return answer;
}
