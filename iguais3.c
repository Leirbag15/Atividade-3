#include <stdio.h>
int iguais3 (int a, int b, int c){
    if(a==b && b==c){
        return 3;
    }else if (a==b && b!=c){
        return 2;
    }else if (a==c && b!=c){
        return 2;
    }else if (c==b && a!=c){
        return 2;
    }else return 0;
}
