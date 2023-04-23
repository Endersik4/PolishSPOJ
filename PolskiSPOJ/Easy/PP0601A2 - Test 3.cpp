#include<iostream>
using namespace std;

int main()
{
    int t[10000], i = 0, ile = 0;
    while (cin>>t[i])
    {
        if(i != 0)
        {
            if (t[i] == 42 && t[i-1] != 42) ile++;
        }
        i++;
        if (ile >= 3) break;
    }
    for (int j = 0; j != i; j++)
    {
        cout<<t[j]<<endl;
    }
    return 0;
}