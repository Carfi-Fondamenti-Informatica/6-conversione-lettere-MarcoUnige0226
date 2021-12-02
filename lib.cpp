#include <iostream>
#include "conversione.h"

char cc(char n,char &ris){
    if (n>='A'&& n<='Z'){
        ris=n+32;
        return true;
    }else if (n>='a'&& n<='z'){
        ris=n-32;
        return true;
    }
    else{
        return false;
    }


}
