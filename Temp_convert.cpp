#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter the temperature to convert: ";
    cin>>temp;
    bool flag;
    cout<<"Convert to Fahrenheit or Celcius(1/0): ";
    cin>>flag;
    if (flag)
    {    
        int f=((temp*9)/5)+32;
        cout<<"Temperature is: "<<f;
    }
    else
    {
        int c=((temp-32)*5)/9;
        cout<<"Temperature is: "<<c;
    }
    return 0;
}