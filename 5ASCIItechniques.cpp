#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout<<"Enter: "<<endl;
    cin>>num;
    
    if ((num>=0) && (num<=127))
    {
        char c = char(num);
    
        cout<<c<<endl;
    
        int p = int(c);
        cout<<p;
    }
    else
    {
        cout<<"Please enter between 0 and 127"<<endl;
    }
    return 0;
}