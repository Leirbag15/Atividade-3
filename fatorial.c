#include <stdio.h>
int fatorial (int n){
    int f=1;
    if(n>=1){
    for (int i=1;i<=n;i++){
        f=f*i;
    }return f;
    }else return 1;
}
