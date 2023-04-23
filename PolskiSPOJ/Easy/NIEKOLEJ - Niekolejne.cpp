#include<iostream>
using namespace std;
long int n;
int main()
{
    cin>>n;
    if (n > 3)
    {
        for (long int i = 0; i <= n; i+=2)
        {
            cout<<i<<" ";
        }
        for (long int i = 1; i <= n; i+=2)
        {
            cout<<i<<" ";
        }

    }
    else if (n == 3) cout<<"2 0 3 1";
    else if (n == 0) cout<<"0";
    else cout<<"NIE";
    return 0;
}