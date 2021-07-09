#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the no."<<endl;
    cin>>N;
    
    int d=2;
    bool divided =false;
    while(d<N)
    {
        if(N%d==0)
        {
            cout<<"Not prime"<<endl;
            divided=true;
        }
        d=d+1;
    }
    if(!divided)
    {
        cout<<"prime"<<endl;
    }
}