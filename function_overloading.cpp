//function volume() is overloaded three times

#include<iostream>

using namespace std;
//declaration(prototypes)

int volume(int);
double volume(double, int);
long volume(long, int, int);
int main()
{

    cout<<"calling the volume() function for computing the volume of a cube -"<<volume(10)<<"\n";
    cout<<"calling the volume() function for computing the volume of a cylinder -"<<volume(2.5,8)<<"\n";
    cout<<"calling the volume()function for computing the volume of a rectangular box - " <<volume(100L,75, 15);

    return 0;

    }

    //function declaration

    int volume(int s) // cube
    {
        return(s*s*s);

    }

    double volume(double r, int h) //cylinder
    {
        return(3.14519*r*r*h);
    }

    long volume(long l, int b, int h) //rectangular box
    {
        return(l*b*h);
    }