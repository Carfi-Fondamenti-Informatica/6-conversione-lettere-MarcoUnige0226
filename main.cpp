#include <iostream>
#include "conversione.h"
using namespace std;

int main() {
char n; char convertito1=0; char convertito2=0;
cin>>n;
    if (inverter(n,convertito1,convertito2)){
        cout<<convertito1;
        cout<<convertito2;
    }else {
        cout<<"errore";
    }
    return 0;
}
