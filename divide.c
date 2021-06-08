#include <stdio.h>
void divide (int v[], int d){
    int v1[n];
    int v2[n];
    printf("[");
    for (int i=n-d; i<n; i++){
        v1[i]=v[i];
        printf("%d", v1[i]);
    }
    printf("]");
    printf("[");
    for (int i=d; i<n; i++){
        v2[i]=v[i];
        printf("%d", v2[i]);
    }
    printf("]");
}
int n; //size 
int main()
{
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
