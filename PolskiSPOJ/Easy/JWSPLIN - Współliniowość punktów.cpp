#include <iostream>

using namespace std;
int ax, ay, bx, by, cx, cy;
int t, suma1, suma2;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        suma1 = (bx - ax) * (cy - ay);
        suma2 = (by - ay) * (cx - ax);
        if (suma1 == suma2) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
    return 0;
}
