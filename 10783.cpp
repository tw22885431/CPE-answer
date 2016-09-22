#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int iNumber1;
int iNumber2;
int iSum = 0;
int iCase = 1;
int iTestCase;
int i = 1 ;
for(cin >> iTestCase ; i<=iTestCase ; i++)
	{
	while (cin >> iNumber1 >> iNumber2)
		{
		if (iNumber1 > iNumber2)
			{
			int Temp;
			Temp = iNumber1;
			iNumber1 = iNumber2;
			iNumber2 = iNumber1;
			}
		for (iNumber1 ; iNumber1 <= iNumber2 ; iNumber1++)
			{
			if (iNumber1 %2==1)
				{
				iSum+=iNumber1;
				}
			}
		break;		
		}
	cout << "Case : " << iCase << " " << iSum << endl;
	iSum = 0;
	iCase++;
	}
system("pause");
return 0;
}
