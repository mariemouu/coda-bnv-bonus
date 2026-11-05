#include <stdio.h>

int main()
{
    int nombre;

    printf("Saisissez un nombre entre 2 et 20 :\n");
    scanf("%d", &nombre);

    if (nombre < 2 || nombre > 20)
    {
        printf("Le nombre doit être entre 2 et 20\n");
    }
    else
    {
        long long resultat = 1;

        for (int i = 2; i <= nombre; i++)
        {
            resultat = resultat * i;
        }

        printf("La factorielle de %d est %lld\n", nombre, resultat);
    }

    return 0;
}
