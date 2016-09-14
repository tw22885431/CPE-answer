#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int iPositive;
while (cin >> iPositive)
    {
    if (iPositive%11 == 0)
        {
        cout << iPositive << " is a multiple of 11"<<endl;
        }
    else
        {
        cout << iPositive << " isn't a multiple of 11 "<<endl;
        }
    }
system("pause");
return 0 ;
}
