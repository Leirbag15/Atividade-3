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

int main()
{
    int n;
    int v[n];
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
