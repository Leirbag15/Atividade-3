#include <stdio.h>
int maior (int v[]){
    int m=v[0];
    for (int i=0; i<n; i++){
        if (m<v[i]){
            m=v[i];
        }
    }
    return m;
}
int n; //size 
int main()
{
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
