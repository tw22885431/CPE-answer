#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
int iN;     //宣告被除數

int iM;     //宣告除數

int iA[20]; //儲存A[i]的陣列

int i ;     //計次迴圈

//輸入iN 和iM
while (cin >> iN >> iM)
    {

    //若iM小於1或是iN小於iM,則印出Boring ，再繼續輸入 
    if (iM <= 1 || iN < iM)
        {
        
        cout << "Boring!" << '\n';

        continue;
        }

    //計次個數
    int iCount = 1;
    
    //計算下一個數，計算到iN的餘數為零且iN不小於iM
    while (iN % iM == 0 && iN >= iM)
        {
        iA[iCount++] = iN;

        iN /= iM;
        }
    //令iA[1]為iN
    iA[iCount] = iN;
    
    //若最後一個數不為零或計次為一時印出Boring 
    if ( iA[iCount] != 1 || iCount == 1)
        {
        
        cout << "Boring!" << '\n';
        }

    //否則印出數列
    else
        {
        for ( i = 1 ; i < iCount ; i++)
            {

            cout << iA[i] << " ";
            }
        }

    //印出最後一個數
    cout << iA[i] << " " << '\n';
    }
} 
