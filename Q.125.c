#include <stdio.h>

int main() {
    int k, soma, n, i, contn;
    soma = 0;
    contn = 0;

    printf("Informe um n�mero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os primeiros %d n�meros perfeitos s�o:\n", n);

    i = 1;
    while (contn < n) {
        soma = 0;
        for (k = 1; k < i; k++) {
            if (i % k == 0) {
                soma += k;
            }
        }

        if (soma == i) {
            printf("%d ", i);
            contn++;
        }

        i++;
    }

    return 0;
}

