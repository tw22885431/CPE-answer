#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main ()
{
//宣告星期字串
string sDay[7] = { "Sunday" , "Monday" , "Tuesday" , "Wendsday" , "Thursday" , "Friday" , "Satuday" };


//宣告天數陣列
int iMonth_Day[13] = { 0 , 31 , 28 , 31 , 30 , 31, 30 , 31 , 31 , 30 , 31 , 30 , 31 };

int iN;             //宣告測組
int iMonth;         //宣告月
int iDay;           //宣告天
int i,j;            //迴圈控制
int iZero_Day;      //宣告空白天數

//輸入測組
while ( cin >> iN)
    {
    iZero_Day = 5;                              //說空白天數為五天

    for ( i = 0 ; i < iN ; i++)
        {
        cin >> iMonth >> iDay;                  //輸入月日
        iDay += iZero_Day;                      //日加上空白天數
        iDay %= 7;                              //再除7等於剩下的天數為一開始的數
        for ( j = 1; j < iMonth ; j++)
            {
            iDay += iMonth_Day[j] % 7;          //剩下的天數和月每一個月的天數除7後天的天數相加
            iDay %= 7;                          //算出那天星期幾
            }
        printf("%s\n",sDay[iDay].c_str());      //印出來
        }
    }

}
