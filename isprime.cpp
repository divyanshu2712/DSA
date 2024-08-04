#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check: ";
    cin>>num;
    int i=2;
    bool flag=1;
    try
    {
        if(num<0)
            throw invalid_argument("Negative Number not allowed");
    while(i<=(sqrt(num)+1))
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        i++;
    }
    if (flag)
        cout<<"The number "<<num<<" is a prime number";
    else
        cout<<"The number "<<num<<" is not a prime number";
    }
    catch(const invalid_argument& e)
    {
        cout<<e.what();
    }
    return 0;
}