#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string Country[2000];
    int n;
    int iCount = 0;
    while (cin >> n)
    {
        string Name;
        for (int i=0;i<n;i++)
        {
            cin>>Country[i];
            getline(cin,Name);
        }   
        sort(Country,Country+n);
        for (int i=0;i<n;i++)
        {
            printf("%s ",Country[i].c_str());
            int j;
            for (j=i;i<n;++j)
            {                
                if (Country[i]!=Country[j])
                {
                     break;
                }
                iCount++;
            }
            cout<<iCount<<'\n';
            i = j-1;
        }
        
    }
}


