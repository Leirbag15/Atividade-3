#include <stdio.h>
void miolo(int v[]){
    for (int i=1; i<n-1; i++){
        printf("%d ", v[i]);
    }
}
int n;
int main()
{
    scanf("%d",&n);
    if (n<=2){
        printf(" ");
    }
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
