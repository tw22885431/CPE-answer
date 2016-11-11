#include <iostream>
#include <cstdio>
using namespace std;

void function (long long int n);

int main()
{
    long long int lliNumber;
    while (cin>>lliNumber)
    {
        int iLength = 1;
        printf("%4d. ",iLength);
        if (lliNumber)
        {
            function(lliNumber);
        }
        else
        {
            printf(" 0");
        }
        printf("\n");
        iLength++;
    }
}

void function(long long int n)
{
    if ( n==0)
    {
        return;
    }
    if (n/10000000)
    {
        function (n/10000000); 
        printf ("%s" ," kuti ");
        n = n%10000000;
    }
    if (n/100000)
    {
        function (n/100000);
        printf("%s"," lakh ");
        n = n%100000;
    }
    if (n/1000)
    {
        function (n/1000);
        printf("%s" ," hajar ");
        n=n%1000;
    }
    if (n/100)
    {
        function (n/100);
        printf("%s" ," shata ");
        n=n%100;
    }
    if (n)
    {
        printf("%lld",n);
    }
}
