#include<iostream>
using namespace std;

int NWD(int a, int b)
{
    if(b!=0)
    	return NWD(b,a%b);

    return a;
}

int main()
{
    int a, b, t;
    cin>>t;
    while(t--)
    {
      cin>>a>>b;
      cout<<NWD(a,b)<<endl;
    }

    return 0;
}
