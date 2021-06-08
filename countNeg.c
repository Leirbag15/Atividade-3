int countNeg (int Neg[]){
    int c;
    for (int i=0; i<n; i++){
        if(v[i]<0){
            c++;
        }
    }
    return c;
}
#include <stdio.h>
int n;
int main()
{
    scanf("%d",&n);
    int v[n];
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
