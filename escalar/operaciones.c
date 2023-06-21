#include "operaciones.h"

void sumarEscalar(int* arreglo, int n, int escalar) {
    for (int i = 0; i < n; i++) {
        *(arreglo + i) += escalar;
    }
}
