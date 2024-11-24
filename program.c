#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y, result;
    int type, continuer = 1;

    while (continuer) {
        printf("-------- Calculatrice Menu --------\n");
        printf(" 1-Addition\n 2-Soustraction\n 3-Multiplication\n 4-Division\n");
        printf(" 5-Reste d'une division entière\n 6-Puissance\n 7-Quitter\n");
        printf("Quel calcul veux-tu effectuer ? ");
        scanf("%d", &type);

        if (type == 7) {
            printf("Êtes-vous sûr de vouloir quitter ? (1 pour oui, 0 pour non) : ");
            scanf("%d", &continuer);
            if (continuer == 1) {
                printf("Au revoir !\n");
                break;
            } else {
                continue;
            }
        }

        printf("Donner la valeur de x : ");
        scanf("%f", &x);
        printf("Donner la valeur de y : ");
        scanf("%f", &y);

        switch (type) {
            case 1:
                printf("La somme est : %.2f\n", x + y);
                break;
            case 2:
                printf("La soustraction est : %.2f\n", x - y);
                break;
            case 3:
                printf("La multiplication est : %.2f\n", x * y);
                break;
            case 4:
                if (y != 0)
                    printf("La division est : %.2f\n", x / y);
                else
                    printf("Erreur: Division par zéro!\n");
                break;
            case 5:
                if (y != 0)
                    printf("Le reste est : %.2f\n", fmod(x, y));
                else
                    printf("Erreur: Division par zéro!\n");
                break;
            case 6:
                printf("La puissance est : %.2f\n", pow(x, y));
                break;
            default:
                printf("Cette option n'existe pas\n");
        }

        printf("Voulez-vous faire une autre opération ? (1 pour oui, 0 pour non) : ");
        scanf("%d", &continuer);
    }

    return 0;
}
