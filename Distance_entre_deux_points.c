#include <stdio.h>
#include <math.h>

int main() {

 
    float X1 , Y1 , X2 , Y2, distance;
    printf("entre X1 et Y1 : ");
    scanf("%f %f",&X1,&Y1);
    printf("entre X2 et Y2 : ");
    scanf("%f %f",&X2,&Y2);

    distance = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    printf("La distance entre les points M et N est : %.2lf\n", distance);

 
   
    
    return 0;
}
