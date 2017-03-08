#include <iostream>
#include <cstdio>

using namespace std;

int main (){

    long unsigned int iBegin;
    long unsigned int iEnd;
    long unsigned int iCount;
    while (cin >> iBegin >> iEnd){
    
        iCount = iBegin;
        while ( iEnd > iCount ){
        
            iEnd -= iCount ;
            iCount++;
        }
        cout << iCount << '\n';
    } 
}
