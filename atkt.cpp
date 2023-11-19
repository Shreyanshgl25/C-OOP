#include <iostream>
using namespace std;
inline float mul(float a, float b)
{
    return(a*b);
}
inline double div(double x, double y)
{
    return(x/y);
}
int main()
{
    float p= 12.345;
    float q = 9.82;

    cout<<mul(p,q) <<"\n";
    cout<<div(p,q) <<"\n";

    return 0;
}
// #include <iostream>
// using namespace std;

// inline float mul(float a, float b) {
//     return a * b;
// }

// inline float div(float x, float y) {
//     return x / y;
// }

// int main() {
//     float p = 12.345;
//     float q = 9.82;

//     cout << mul(p, q) << "\n";
//     cout << div(p, q) << "\n"; // Corrected function call

//     return 0;
// }