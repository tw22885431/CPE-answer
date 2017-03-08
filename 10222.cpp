#include <iostream>
#include <cstdio>
#include <cstring>

const char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
const int  keylength = strlen(keyboard);

using namespace std;

int main (){
    
    int i;
    char cWord;
    while (cin.get(cWord)){

        cWord = tolower(cWord);
        if (cWord == '\n'||cWord == ' ')
            cout << cWord;
        else{
            for (i = 0;i<=keylength;i++)
                if (cWord == keyboard[i])
                    cout << keyboard[i-2];
        }    

    }
}
