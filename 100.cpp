#include <iostream>
#include <cstdio>
using namespace std;

int CycleLength(int);

int main()
{
    int i;
    int j;
    int iMax;
    int iMin;
    int iMax_length;
    int iTemp_length;
    while((cin >>i) && (cin >>j))
    {
        iMax_length=0;
        iMax = (i>j)? i : j ;
        iMin = (i<j)? i : j ;
        for(; iMin<=iMax ; iMin++)
        {
            iTemp_length = CycleLength(iMin);
            iMax_length = (iTemp_length > iMax_length)? iTemp_length : iMax_length; 
        }
        printf("%d %d %d\n",i,j,iMax_length);
    }
    return 0;
}

int CycleLength(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if ( n % 2 )
    {
        return 1+CycleLength(3*n+1);
    }
    else
    {
        return 1+CycleLength(n/2);
    }
}
