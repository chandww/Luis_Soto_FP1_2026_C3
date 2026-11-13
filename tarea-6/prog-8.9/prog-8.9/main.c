#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bienes raices.
   El programa maneja información sobre propiedades (casas y terrenos)
   disponibles para venta, aplicando estructuras anidadas y filtros de búsqueda. */

struct ubicacion
{
    char zona[20];
    char calle[25];
    char colonia[20];
};

struct propiedad
{
    int clave;
    char tipo[20];
    float costo;
    struct ubicacion ubica;
    char descripcion[50];
};

void lectura(struct propiedad A[], int T);
void f1(struct propiedad A[], int T);

int main(void)
{
    struct propiedad PROPIEDADES[100];
    int n;

    printf("\nIngrese el numero de propiedades (maximo 100): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 100) n = 100;
        if (n < 1) n = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lectura(PROPIEDADES, n);
        f1(PROPIEDADES, n);
    }

    return 0;
}

void lectura(struct propiedad A[], int T)
/* Esta función permite leer los datos de un arreglo de estructuras de tipo propiedad. */
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("\n--- Propiedad %d ---\n", i + 1);

        printf("Clave de la propiedad: ");
        if (scanf("%d", &A[i].clave) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Tipo de propiedad (Casa / Terreno, maximo 20 caracteres): ");
        if (fgets(A[i].tipo, sizeof(A[i].tipo), stdin))
        {
            A[i].tipo[strcspn(A[i].tipo, "\n")] = '\0';
        }

        printf("Costo: ");
        if (scanf("%f", &A[i].costo) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Zona (maximo 20 caracteres): ");
        if (fgets(A[i].ubica.zona, sizeof(A[i].ubica.zona), stdin))
        {
            A[i].ubica.zona[strcspn(A[i].ubica.zona, "\n")] = '\0';
        }

        printf("Calle (maximo 25 caracteres): ");
        if (fgets(A[i].ubica.calle, sizeof(A[i].ubica.calle), stdin))
        {
            A[i].ubica.calle[strcspn(A[i].ubica.calle, "\n")] = '\0';
        }

        printf("Colonia (maximo 20 caracteres): ");
        if (fgets(A[i].ubica.colonia, sizeof(A[i].ubica.colonia), stdin))
        {
            A[i].ubica.colonia[strcspn(A[i].ubica.colonia, "\n")] = '\0';
        }

        printf("Descripcion (maximo 50 caracteres): ");
        if (fgets(A[i].descripcion, sizeof(A[i].descripcion), stdin))
        {
            A[i].descripcion[strcspn(A[i].descripcion, "\n")] = '\0';
        }
    }
}

void f1(struct propiedad A[], int T)
/* Esta función muestra las propiedades que se ajustan a un rango de precio
   y a una zona específica solicitada. */
{
    int i;
    float min_costo, max_costo;
    char zona_buscada[20];

    printf("\n--- Filtro de busqueda de propiedades ---\n");
    printf("Ingrese la zona deseada: ");
    if (fgets(zona_buscada, sizeof(zona_buscada), stdin))
    {
        zona_buscada[strcspn(zona_buscada, "\n")] = '\0';
    }

    printf("Ingrese el costo minimo: ");
    if (scanf("%f", &min_costo) == 1)
    {
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("Ingrese el costo maximo: ");
    if (scanf("%f", &max_costo) == 1)
    {
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("\n\nPropiedades encontradas en la zona '%s' (Rango: %.2f - %.2f):\n",
           zona_buscada, min_costo, max_costo);

    for (i = 0; i < T; i++)
    {
        if (strcmp(A[i].ubica.zona, zona_buscada) == 0)
        {
            if (A[i].costo >= min_costo && A[i].costo <= max_costo)
            {
                printf("\nClave: %d", A[i].clave);
                printf("\n\tTipo: %s", A[i].tipo);
                printf("\n\tCosto: %.2f", A[i].costo);
                printf("\n\tUbicacion: Calle %s, Colonia %s", A[i].ubica.calle, A[i].ubica.colonia);
                printf("\n\tDescripcion: %s\n", A[i].descripcion);
            }
        }
    }
}
