#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int n);

int main()
{
	int iNumber;
	int iBlock;
	while(cin>>iBlock&&iBlock!=0)
	{	
	iNumber = factorial(iBlock);
	cout<<iNumber<<endl;
	}
}
int factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	if (n==2)
	{
		return 2;
	}
	return (factorial(n-1)+factorial(n-2));
}

