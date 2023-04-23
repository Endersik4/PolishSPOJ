#include<iostream>
using namespace std;

int main()
{
    int t, tab[10], i = 0;
    char znak;
    while(cin>>znak)
    {
        if (znak == '+')
        {
            if (i != 10)
            {
                cin>>tab[i];
                cout<<":)"<<endl;
                i++;
            }
            else cout<<":("<<endl;
        }
        else if(znak == '-')
        {
            if (i != 0)
            {
                i--;
                cout<<tab[i]<<endl;
                
            }
            else cout<<":("<<endl;
        }
    }
    return 0;
}