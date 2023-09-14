#include <stdio.h>

int main() {
    char nom[100], prenom[100], sexe[10];
    int age;
    long long numero;

    printf("Nom : ");
    scanf("%s", nom);
    

    printf("Prenom : ");
    scanf("%s", prenom);

    printf("Sexe : ");
    scanf("%s", sexe);

    printf("age : ");
    scanf("%d", &age);

    printf("Numero de telephone : ");
    scanf("%lld", &numero);

    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Sexe : %s\n", sexe);
    printf("age : %d ans\n", age);
    printf("Numero de telephone : %lld\n", numero);

    return 0;
}
