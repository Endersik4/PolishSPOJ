#include <iostream>
using namespace std;
int t,i;
string a,b;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(a[i] != '\0')
        {
            if (b[i] == '\0') break;
            cout<<a[i]<<b[i];
            i++;
        }
        cout<<endl;
        i=0;
    }

    return 0;
}
