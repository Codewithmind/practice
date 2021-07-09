#include<iostream>
using namespace std;
int main()
{
    char s;
    cout<<"Enter a character"<<endl;
    cin>>s;
    int a=s;
    if(a>=65 && a<=91)
    {
        cout<<"1"<<endl;
    }
    else if(a>=97 && a<=122)
    {
        cout<<"0"<<endl;

    }
    else
    cout<<"0"<<endl;
}