#include <stdio.h>
#include <string.h>

int main() {
    char ingrediente[10];

    printf("¿Qué ingrediente quiere? (Solo uno)\n");
    printf("Opciones: Albahaca, Champiñones, Peperoni, Cuatro carnes, Jamon\n");
    scanf("%s", ingrediente);

    if (strcmp(ingrediente, "V1") == 0 || strcmp(ingrediente, "V2") == 0) {
        printf("Pizza vegetariana\n");

        if (strcmp(ingrediente, "V1") == 0) {
            printf("Mozzarella, Tomate y Albahaca\n");
        } else {
            printf("Mozzarella, Tomate y Champiñones\n");
        }
    } 
    else if (strcmp(ingrediente, "NV1") == 0 || strcmp(ingrediente, "NV2") == 0) {
        printf("Pizza no vegetariana\n");

        if (strcmp(ingrediente, "NV1") == 0) {
            printf("Mozzarella, Tomate y Peperoni\n");
        } else {
            printf("Mozzarella, Tomate y Cuatro carnes\n");
        }
    } 
    else {
        printf("Pizza no vegetariana\n");
        printf("Mozzarella, Tomate y Jamon\n");
    }

    return 0;
}