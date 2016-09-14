#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
long long int illHashmat;
long long int illOpponent;
long long int illDifference;//宣告Hashmat,反抗軍和相差的軍隊數量
while(cin>>illHashmat>>illOpponent) 
    {
    illDifference=abs(illHashmat-illOpponent);
    cout<<illDifference<<endl;		
    }
system("pause");
return 0;
}
