#include <iostream>

using namespace std;
int n, a, b, sumaa, sumab;
void zwraca(int c, int d, int sumac, int sumad)
{
    if (c == d) cout<<c<<endl;
    else if (c < d) {c+=sumac; zwraca(c, d, sumac, sumad);}
    else if (c > d) {d+=sumad; zwraca(c, d, sumac, sumad);}
}
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        sumaa=a;
        sumab=b;
        zwraca(a, b, sumaa, sumab);
    }
    return 0;
}
