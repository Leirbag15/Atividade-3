#include <stdio.h>
int gangorra(int a, int b, int c, int d){
    if((a*b)>(c*d)){
        return -1;
    }else if((a*b)<(c*d)){
        return 1;
    }else return 0;
}
