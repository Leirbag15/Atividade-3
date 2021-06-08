#include <stdio.h>
int max3 (int a, int b, int c){
    if(a<=b && c<=b){
        return b;
    }else if(b<=a && c<=a){
        return a;
    }else if(b<=c && a<=c){
        return c;
    }else return a;
}
