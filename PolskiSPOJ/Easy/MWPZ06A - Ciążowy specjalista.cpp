#include<iostream>
#include<iomanip>
using namespace std;
float x, y, z, wiek, t, msc;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        wiek = ((x + y) - (z * y)) / (z-1);
        wiek *= 12;
        if (wiek < 0) wiek *= (-1);
        cout<<fixed<<setprecision(0)<<wiek<<endl;
    }
    return 0;
}