#include <stdio.h>
#include <math.h>

int main() {

 
    float A , B, H;
    printf("entre A : ");
    scanf("%f",&A);
    printf("entre B : ");
    scanf("%f",&B);
    H = A + B ;
    printf("A + B = %.2f\n",H );
    H = A - B ;
    printf("A - B = %.2f\n",H );
    H = A * B ;
    printf("A * B = %.2f\n",H );
    H = A / B ;
    printf("A / B = %.2f\n",H );
    H = fmodf(A, B);

    printf("A %% B = %.2f\n", H);

   



   
 

    




    




    

    return 0;
}
