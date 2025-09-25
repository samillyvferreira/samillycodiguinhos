#include <stdio.h>
int main() {
 
    double glicose;
    printf("Digite o valor da glicose: ");
    scanf("%lf", &glicose); 

    if (glicose <= 100.0) {
        printf("Normal\n");
    } else if (glicose <= 140.0) {
        printf("Elevado\n"); 
    } else {
        printf("Diabetes\n");
    }
    return 0;
}
