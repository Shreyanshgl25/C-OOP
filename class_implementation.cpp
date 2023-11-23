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
inline void item :: getdata(int a, float b){
    number=a;
    cost=b;
}  

int main()
{
    item x;
    cout<<"\nobject  x"<<"\n";

    x.getdata(200,175.50);
    x.putdata();

    item y;
    cout<<"\nobject y"<<"\n";
    y.getdata(150,509.67);
    y.putdata();

    return 0;
}