#include <iostream>
#include "conversione.h"
using namespace std;

int main() {
char n;
char x;
cin>>n;
x= convertecarattere(n);
    if (convertecarattere(n)){
        cout<<x;
    }else {
        cout<<"errore";
    }
    return 0;
}
