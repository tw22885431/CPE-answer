#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main ()
{
int iNumber;
int iLenght;
int Temp[200000];
int iCount;
int i;
while ( cin >> iNumber )
    {
    i = 0;
    iCount = 0;
    iLenght = 0;
    while ( iNumber > 0)
        {
        
        Temp[i] = iNumber % 2;
        iNumber /= 2;
        i++;
        iLenght++;
        }
    for ( i = 0 ; i <= iLenght ; i++)
        if (Temp[i] == 1)
            iCount++;
    cout << "The parity of " ;
    for ( i = (iLenght - 1) ;i >= 0 ; i-- )
        cout << Temp[i] ;
    cout << " is " << iCount <<" (mod 2) " << '\n';
    }
}

