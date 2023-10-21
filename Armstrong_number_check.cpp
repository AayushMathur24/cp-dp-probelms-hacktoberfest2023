#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int num)
{
    int rem,sum=0,x=num;
    while(num!=0)
    {
        rem = num%10;
        sum+=pow(rem,3);
        num = num/10;
    }
    if(sum==x)
        cout<<"Armstrong Number";
    else
        cout<<"Not an armstrong number";
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    armstrong(n);
    return 0;
}
