#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Saisissez un nombre entre 0 et 100 :\n");
    scanf("%d", &nombre);

    if (nombre < 0 || nombre > 100)
    {
        printf("Le nombre doit être entre 0 et 100\n");
    }
    else
    {
        for (int i = 0; i <= nombre; i = i + 5)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
