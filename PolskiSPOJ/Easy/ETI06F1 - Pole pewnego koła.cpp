#include <iostream>
#include <math.h>
using namespace std;
double r,d;
int main()
{
    cin>>r>>d;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<(pow(r,2) - (pow(d,2)/4)) * M_PI;
    return 0;
}
