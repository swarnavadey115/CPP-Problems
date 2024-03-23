#include<iostream>
#include<string>
using namespace std;

string flttostr(const float f);

int main()
{
    cout<<"Float: ";
    float f;
    cin>>f;
    
    string a;
    int int_f = static_cast<int>(f);
    a = flttostr(f);

    cout<<"integer "<<int_f<<endl;
    cout<<"string "<<a<<endl;

    return 0;
}

string flttostr(const float f)
{
    string answer;
    int intpart = static_cast<int>(f);
    float floatpart = f - intpart;

    string intstr = to_string(intpart);
    answer = answer + intstr + ".";

    while (floatpart>0)
    {
        floatpart *= 10;
        int digit = static_cast<int>(floatpart);
        answer += to_string(digit);
        floatpart -= digit;

    }
    return answer;
}