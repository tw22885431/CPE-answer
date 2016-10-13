#include <iostream>
#include <cstdlib>

using namespace std;
long long int countTree(unsigned int n);

int main()
{
	int iNumber;
	int iTest;
	while(cin>>iTest && iTest!=0)
	{
		iNumber=countTree(iTest);
		cout<<iNumber<<endl;
	}
	system("pause");
	return 0;
}

long long int countTree(unsigned int n)
{
    long long int catalan[n+1];
    catalan[0]=catalan[1]=1;
    for (int i=2;i<=n;i++)
    {
        catalan[i]=0;
        for (int j=0;j<i;j++)
        {
            catalan[i] += catalan[j]*catalan[i-j-1];
        }
    }
    return catalan[n];
}
