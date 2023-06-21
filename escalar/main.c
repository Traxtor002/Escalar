#include <stdio.h>
#include "operaciones.h"

int main() {
    int escalar, n;
    printf("Ingrese el escalar: ");
    scanf("%d", &escalar);
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    
    sumarEscalar(arreglo, n, escalar);
    
    printf("Arreglo resultante después de sumar el escalar:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    
    return 0;
}
