#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
int iNumber1;                       //宣告第一個數
int iNumber2;                       //宣告第二個數
int iCarry[3];                      //宣告三個有進位的格子
int iCount;                         //計算進位的次數
int i;                              //控制迴圈變數

//輸入數字
while ( cin >> iNumber1 >> iNumber2 )
    {
    iCount = 0;                     //設次數為0

    //若輸入的數字為0時，結束
    if ( iNumber1 == 0 || iNumber2 == 0)
        break;


    for ( i =0 ; i < 3 ; i++)
        {   
        iCarry[i] = iNumber1 %10 + iNumber2 %10;    //把低位數的數字相加

        //若低位數加起來有10以上，次數加一
        if ( iCarry[i] >= 10)
            iCount++;
        iNumber1 /= 10;                             //降位數
        iNumber2 /= 10;                             //降位數
        }

    //輸出
    if (iCount == 0)
        cout << "No carry operation" << '\n';
    else 
        cout << iCount << "carry operation" << '\n';
    }
}
