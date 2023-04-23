#include <iostream>

using namespace std;
int t;
long int miasto, suma, maks;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>miasto;
        suma += miasto;
        if (suma > maks) maks=suma;
        else if (suma < 0) suma=0;
    }
    cout<<maks;
    return 0;
}
