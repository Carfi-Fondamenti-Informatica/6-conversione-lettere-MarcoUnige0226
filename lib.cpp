#include<iostream>
#include "conversione.h"

char convertecaratteri(char n){
    char risultato;
    if (n>='A'&& n<='Z'){
        risultato=n+32;
        return risultato;
    }
    else if (n>='a'&& n<='z'){
        risultato=n-32;
    return risultato;
    }else
    return false;

}
