#include<iostream>
using namespace std;
int n, m, reszta[40000], coile;

int main()
{
    cin>>m>>n;
    int f = m*n;
    for (int i = 0; i != f; i++)
    {
            cin>>reszta[i];
    }
    for (int i = 0; i != n; i++)
    {
        coile = i;
        
        for (int j = 0; j != m; j++)
        {
            cout<<reszta[coile]<<" ";
            coile += n;
            
        }
        cout<<endl;
        
    }
    return 0;
}