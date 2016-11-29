#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
int iNumber;    //宣告整數
int iSum;       //數字總和
int Temp;       //存放數字

//輸入數字
while (cin >> iNumber && iNumber != 0)
    {
    Temp =  iNumber;    //設存放的數字為iNumber

    //若存放數字除10的整數大於0時進迴圈
    while ( (Temp /10) > 0 )
        {

        iSum = 0;   //設總和為0

        //當iNumber大於0時進迴圈
        while ( iNumber > 0 )
            {
            iSum += iNumber%10;     //把iNumber的個位數加在總和裡
            iNumber /= 10;          //iNumber降位
            }
        Temp = iSum;                //把iNumber放到Temp裡
        iNumber =  Temp;
        }
    cout << iSum <<'\n';            //輸出Sum的總和
    }

}

