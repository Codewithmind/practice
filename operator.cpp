#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;

    bool isEqual =(a==b);
    bool isGreater =(a>b);
    bool isSmaller= (a<b);
    bool isEqual1 = (a && b==0);
    bool isSmaller1 = ( a ||b == 0);


    cout<<"Are they equal"<< isEqual <<endl;
    cout<<"Are they greater"<< isGreater <<endl;
    cout<<"Are they smaller"<< isSmaller <<endl;
    cout<<"Are they bigger"<<isEqual1<<endl;
    cout<<"Are they chhota"<<isSmaller1<<endl;


}