#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
while ( true )
    {
    int iVelcity;   //宣告速度

    int iTime;      //宣告時間

    int iDisplacement;      //宣告位移

    cin >> iVelcity >> iTime;   //輸入速度和時間

    iDisplacement = iVelcity * iTime * 2;   //位移=速度X時間的2倍

    cout << iDisplacement << '\n';  //輸出位移
    }
}
