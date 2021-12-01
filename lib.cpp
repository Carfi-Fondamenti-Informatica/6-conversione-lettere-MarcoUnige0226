#include<iostream>
#include "conversione.h"

bool inverter(char n, char &convertito1, char &convertito2){
    if (n>=65 && n<=90){
        convertito1=n+32;
        return true;
    }
    else if (n>=97 && n<=122){
        convertito2=n-32;
        return true;
    }
    else{
        return false;
    }
}
