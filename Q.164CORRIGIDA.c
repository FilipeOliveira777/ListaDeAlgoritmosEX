#include <stdio.h>

const int tamanho=5;
const int tamanhoc=10;

int main() {
    int aux, i, k;
    int veta[tamanho], vetb[tamanho], vetc[tamanhoc],tamanhoc=10;
    
    for (k = 0; k < tamanho; k++) {
        printf("Informe um número inteiro para VETA: ");
        scanf("%d", &veta[k]);
        vetc[k] = veta[k];
    }
    
    for (k = 0; k < tamanho; k++) {
        printf("Informe um número inteiro para VETB: ");
        scanf("%d", &vetb[k]);
        vetc[tamanho + k] = vetb[k];
    }
    
    for (k = 0; k < tamanhoc; k++) {
        for (i = k + 1; i < tamanhoc; i++) {
            if (vetc[k] == vetc[i]) {
                aux = vetc[i];
                vetc[i] = vetc[tamanhoc - 1];
                vetc[tamanhoc - 1] = aux;
                tamanhoc--;
                i--;
            }
        }
    }
    
    for (k = 0; k < tamanhoc; k++) {
        printf("%d ", vetc[k]);
    }
    
    return 0;
}

