#include <stdio.h>

int main(void)
{
    char prenom[50];
    char nom[50];

    scanf("%s", prenom);
    scanf("%s", nom);

    printf("Prénom : %s\n", prenom);
    printf("Nom : %s\n", nom);

    return 0;
}
