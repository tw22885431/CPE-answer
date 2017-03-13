#include <iostream>
#include <cstdio>

using namespace std;

int main (){

    char cText;
    bool bQuote;
    bQuote = false;
    while(cin.get(cText)){
    

        if (cText == '"'){
        
            if (bQuote){
            
                cout << "'"<<"'";
            }
            else{
                cout << "`"<<"`";
            }
            bQuote = !bQuote;
        }
        else{
            cout << cText;
        }
    } 
}
