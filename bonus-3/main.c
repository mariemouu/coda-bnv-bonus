#include <stdio.h>

int main(void)
{
    char prenom[50];
    char nom[50];

    printf("Saisissez votre prénom :\n");
    scanf("%s", prenom);

    printf("Saisissez votre nom :\n");
    scanf("%s", nom);

    printf("Prénom : %s\n", prenom);
    printf("Nom : %s\n", nom);

    return 0;
}
