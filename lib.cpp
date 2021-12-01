#include<iostream>
#include "conversione.h"

char convertecarattere(char c){
    char risultato;
    if (c>='A'&& c<='Z'){
        risultato=c+32;
    }else if (c>='a'&& c<='z'){
        risultato=c-32;
        return risultato;
    }else{
        return false;
            }
}
