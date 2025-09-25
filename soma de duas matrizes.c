#include <stdio.h>
int main() {
    int m[3][3], i, j, t;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m[i][j]);
    for(i=0;i<3;i++) { t=m[i][0]; m[i][0]=m[i][2]; m[i][2]=t; }
    for(i=0;i<3;i++,printf("\n"))
        for(j=0;j<3;j++)
            printf("%d ",m[i][j]);
    return 0;
}