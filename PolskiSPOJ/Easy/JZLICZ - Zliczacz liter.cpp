#include <iostream>
using namespace std;
int znaki[256],t;

int main()
{
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string napis;
        getline(cin, napis);
        for(int i=0; i<napis.length(); i++)
        {
            if(napis[i] != ' ')
            {
                znaki[int(napis[i])]++;
            }
        }
    }
    for (int i=97; i<=122; i++) if(znaki[i] != 0) {cout<<char(i)<<" "<<znaki[i]<<endl;}
    for (int i=65; i<=90; i++) if(znaki[i] != 0) {cout<<char(i)<<" "<<znaki[i]<<endl;}

    return 0;
}
