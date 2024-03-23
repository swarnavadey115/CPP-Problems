#include<iostream>
#include<string>
using namespace std;

int leng(const string& str1);
void swap(char *c, char* d);
string sorted(string& str1);
bool in(const string &str, char c);
string cnt(const string &str);
bool check(string& str1,string& str2);

int main()
{
    string str1,str2;
    cout<<"String1"<<endl;
    getline(cin,str1);

    cout<<"String2"<<endl;
    getline(cin,str2);

    bool result = check(str1,str2);

    if(result == true)
    {
        cout<<"Yes, they are Anagram"<<endl;
    }
    else
    {
        cout<<"No, they aren't Anagram";
    }

    return 0;
}

int leng(const string& str1)
{
    int length = 0;

    while(str1[length] != '\0')
    {
        length++;
    }
    return length;
}

void swap(char* c,char* d)
{
    char temp;
    temp = *c;
    *c = *d;
    *d = temp;
}

string sorted(string& str1)
{
    //string answer;

    int length_ = leng(str1);
    for (int i = 1; i<length_; i++)
    {
        for(int j=i;j>0;j--)
        {
            if(str1[j]<str1[j-1])
            {
                swap(&str1[j],&str1[j-1]);
            }
        }
    }

    return str1;
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
            answer += to_string(charcnt);
        }
    }

    return answer;
}

bool check(string& str1,string& str2)
{
    string st1 = sorted(str1);
    string st2 = sorted(str2);
    string new1,new2;
    new1 = cnt(st1);
    new2 = cnt(st2);

    if (new1==new2)
    {
        return true;
    }

    return false;
}