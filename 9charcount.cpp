//input - abbcccc
//output - ab2c4
//input - abcbcc
//output - ab2c3
#include<iostream>
#include<string>
using namespace std;

string cnt(const string &str);
bool in(const string &str, char c);

int main()
{
    string str,res;
    getline(cin,str);
    res = cnt(str);

    cout<<res;

    return 0;
}

string cnt(const string &str)
{
    string answer;
    int leng = 0;
    while(str[leng] != '\0')
    {
        leng++;
    }

    for (int i=0; i<leng; i++)
    {
        if(!(in(answer,str[i])))
        {
            answer += str[i];
            int charcnt = 0;
            for (int j = i; j<leng; j++)
            {
                if (str[i] == str[j])
                {
                    charcnt++;
                }
            }
            if (charcnt>1)
            {
                answer += to_string(charcnt);
            }
        }
    }

    return answer;
}

bool in(const string &str, char c)
{
    for (char x : str)
    {
        if (x==c)
        {
            return true;
        }
        else
        {
            continue;
        }
    }
    return false;
}
