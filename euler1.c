#include <stdio.h>
int euler1 (int e){
    int es=0;
    for(int i=1;i<e;i++){
        if(i%3==0 || i%5==0){
            es=es+1;
        }
    }
    return es;
}
