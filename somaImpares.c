#include <stdio.h>
int somaImpares(int v[]){
    int s=0;
    for (int i=0; i<n; i++){
        if(v[i]%2!=0){
            s=s+v[i];
        }
    }
    return s;
}
int n;
int main()
{
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
