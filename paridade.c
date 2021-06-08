#include <stdio.h>
// Como C não suporta bool propriamente dito, vou substituir por 0 e 1
// 1=TRUE
//0= FALSE
int paridade (int v[]){
    int t=0;
    for (int i=0; i<n;){
        if(v[i]==1){
            t=t=1;
        }
    }
    if(t%2==0){
        return 0;
    }else return 1;
}
