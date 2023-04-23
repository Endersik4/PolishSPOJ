#include <iostream>

using namespace std;
double a,b,c,x;
int main()
{
    cin>>a>>b>>c;
    if (a != 0.00)
    {
        x = (c-b)/a;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<x<<endl;
    }
    else if (a == 0.00)
    {
        x = c-b;
        if (x == 0) cout<<"NWR"<<endl;
        else if (x != 0) cout<<"BR"<<endl;
    }

    return 0;
}
