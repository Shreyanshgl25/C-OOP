#include<iostream>

using namespace std;

class item
{
    int number;  //private by default
    float cost;   //private by default
    public:
    void getdata(int a, float b);   //prototype declaration, to be defined

    //function defination inside a class


    void putdata(void)
    {
        cout<<"number :"<<number << "\n";
        cout<<"cost :" <<cost << "\n";
    }


};
     