#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
int iCase;      //宣告輸入的測組


while( true )
    {
    int iTeam1;   //宣告第一個隊伍

    int iTeam2;   //宣告第二個隊伍

    int iSum;   //宣告兩對的和

    int iDifference;    //宣告兩對的差

    cin >> iCase;   //輸入測組

    for (int i = 1 ; i <= iCase ; i++ )
        {

        cin >> iTeam1 >> iTeam2;    //輸入兩隊的分數
        
        //若iTeam1 大於 iTeam2時 印出和與差
        if ( iTeam1 > iTeam2 )
            {
            
            //兩對分數相加除以2
            iSum = ( iTeam1 + iTeam2 ) / 2;

            //兩隊分數相減除以2 
            iDifference = ( iTeam1 - iTeam2 ) / 2;

            //印出和與差
            cout << iSum << " " << iDifference << '\n';
            }

        //若不是則印出impossible
        else
            {

            cout << "impossible" << '\n';

            }
        }

    }
}
