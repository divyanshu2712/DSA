#include<iostream>
using namespace std;

int main()
{
    int h;
    cout<<"Enter a number till which you want the even sum: ";
    cin>>h;
    int s=0;
    for(int i=1;i<h;i++)
    {
        if(i%2==0)
            s=s+i;
    }
    cout<<"Sum of Numbers are: "<<s;

    return 0;
}