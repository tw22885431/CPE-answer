#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
int iCola;      //宣告可樂的數量
int iTotal;     //宣告喝掉的總和

//因題目的法二可知當我們借來的可樂空瓶後可得一個等比級數，公差為三分之一
while ( cin >> iCola )
    {
    iTotal = iCola * 3/2;
    cout << iTotal << '\n';
    }
}
