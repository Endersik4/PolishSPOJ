#include <iostream>

using namespace std;

char zdanie;
char szyfr_cezar[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z'};
void szyfrowanie(char cezar);
int main()
{
    while(cin.get(zdanie))
    {
        szyfrowanie(zdanie);
    }
    return 0;
}
void szyfrowanie(char cezar)
{
    if (cezar != '\n' || cezar != ' ')
    {
        for (int i = 0; i != 26; i++)
        {
            if (cezar == szyfr_cezar[i])
            {
                if (i == 23) cezar = szyfr_cezar[0];
                else if (i == 24) cezar = szyfr_cezar[1];
                else if (i == 25) cezar = szyfr_cezar[2];
                else cezar = szyfr_cezar[i+3];
                break;
            }
        }
    }
    cout<<cezar;
}
