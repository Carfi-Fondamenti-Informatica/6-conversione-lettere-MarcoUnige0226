#include <iostream>
#include "conversione.h"
using namespace std;

int main() {
char n;
char ris;
cin>>n;
char x=0;
        x= cc(n,ris);
    if (x==true){
        cout<<ris;
    }
    else if(x==false){
        cout<<"errore";
    }
    return 0;
}
