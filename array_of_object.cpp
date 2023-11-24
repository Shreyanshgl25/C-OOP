#include<iostream>
using namespace std;
class employee
{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);

};
void employee ::getdata(void)
{
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age";
    cin>>age;
}

void employee ::putdata(void)
{
    cout<<"name: " <<name<<"\n";
    cout<<"age: " <<age<<"\n";
}

int main(){
// OOPs  - classes and object

//classes can make few member as private and few as public

//classes have methods and properties

//struecture in c++

employee manager[3];
for(int i=0;i<3;i++){
    cout<<"\nManager" <<i+1<<"\n";
    manager[i].getdata();

}
cout<<"\n";


    for(int i=0;i<3;i++){
    cout<<"\nManager" <<i+1<<"\n";
    manager[i].putdata();
}





    return 0;
}