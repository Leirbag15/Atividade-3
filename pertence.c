#include <stdio.h>
// Como C não tem bool propriamente dito, vou usar 0 pra indicar False e 1 pra True
int pertence(int p, int v[]){
    for (int i=0; i<n; i++){
        if(v[i]==p){
            return 1;
        }
    } return 0;
    
}
int n; //size 
int main()
{
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
