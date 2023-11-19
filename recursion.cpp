#include<iostream>
#include<conio.h>
using namespace std;
long fact(int n)
{
    if (n==0)//base class
    return 1;

    return (n*fact(n-1)); //recursion function call

}
int main()
{
    int num;
    cout<<"enter a positive number: ";
    cin>>num;

    cout<<"factorial of "<<num<<" is "<<fact(num);
getch();
return 0;

}