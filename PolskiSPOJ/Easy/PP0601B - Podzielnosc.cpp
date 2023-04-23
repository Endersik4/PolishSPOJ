#include<iostream>
using namespace std;
int t, a[100000], x, y, n, i, j=1;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        while(n>j)
        {
            a[i] = j;
            //cout<<"A ["<<i<<"] = "<<a[i]<<endl;
            if (a[i] % x == 0 && a[i] % y != 0)
            {
                if(a[i] != n) {i++;}
            }
            j++;
        }
        for (int g=0; g<i; g++) cout<<a[g]<<" ";
        cout<<endl;
        i=0;
        j=0;
    }
    return 0;
}
