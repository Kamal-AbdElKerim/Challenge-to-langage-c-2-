#include <stdio.h>

int main() {
   double Temperaturee , Temperature_Degre;
  
    printf("Entre Temperature en Fahrenheit: ");
    scanf("%lf", &Temperaturee);

    Temperature_Degre = (Temperaturee - 32) / 1.8 ;

    printf("la temperature en degre : %.2lf\n", Temperature_Degre);

   
 
           if (Temperature_Degre < 0) {
        printf("Sensation : Tres froid\n");
    } else if (Temperature_Degre >= 0 && Temperature_Degre < 15) {
        printf("Sensation : Froid\n");
    } else if (Temperature_Degre >= 15 && Temperature_Degre < 35) {
        printf("Sensation : Chaud\n");
    } else {
        printf("Sensation : Tres chaud\n");
    }
    
    




    




    

    return 0;
}
