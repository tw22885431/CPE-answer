#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main ()
{
int iNumber1;
int iNumber2;
int iSquareCase = 0;
int iAnswer;
double dAnswer;
while (cin >> iNumber1 >> iNumber2 && (iNumber1||iNumber2))
	{
	if(iNumber1 > iNumber2)
	{
	int Temp;
	Temp = iNumber1;
	iNumber1 = iNumber2;

	}
	for (iNumber1 ; iNumber1<=iNumber2 ; iNumber1++ )
		{
		iAnswer = sqrt(iNumber1);
		dAnswer = sqrt(iNumber1);
		if (iAnswer == dAnswer )
			{
			iSquareCase++;
			}
		}
	cout << iSquareCase << endl;
	iSquareCase = 0;
	}
system("pause");
return 0;
}
