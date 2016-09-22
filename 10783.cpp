#include <iostream>
#include <cstdlib>

using namespace std ;

int main ()
{
int iNumber1;
int iNumber2;
int iSum;
int i;
int iCase = 1;
int iTestcase = 0;
cin >> iTestcase;
for (i = 1 ; i <= iTestcase ; i++)
	{
	for (cin >> iNumber1 >> iNumber2 ; iNumber1<=iNumber2;iNumber1++)
		{
		if (iNumber1 %2 == 1)
			{
			iSum+=iNumber1;
			}
	
		}
	cout << "Case : " << iCase<<" " << iSum << endl;
	iCase++;
	iSum = 0 ;
	}
system("pause");
return 0;
}
