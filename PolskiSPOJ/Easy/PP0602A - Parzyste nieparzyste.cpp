#include<iostream>
using namespace std;
int t, ile;
bool CzyParzysta;
int LiczbyParz[1000];
int LiczbyNie[1000];
int p, n;

int main()
{
    cin>>t;
    for (int i = 0; i != t; i++)
    {
        cin>>ile;
        for (int j=0; j != ile; j++)
        {
            if (CzyParzysta == false)
            {
                cin>>LiczbyNie[p];
                CzyParzysta = true;
                p++;
            }
            else
            {
                cin>>LiczbyParz[n];
                CzyParzysta = false;
                n++;
            }
        }
        for (int j = 0; j !=n; j++)
        {
        cout<<LiczbyParz[j]<<" ";
        }
        for (int j = 0; j != p; j++)
        {
        cout<<LiczbyNie[j]<<" ";
        }
        cout<<endl;
        p = 0;
        n = 0;
        CzyParzysta = false;
    }
    return 0;
}