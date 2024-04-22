#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int soma, contador, numero;

    soma = 0;
    contador = 0;
    numero = 2;
    do {
        soma = soma + numero;
        numero = numero + 2;
        contador++;
    } while (contador < 5000);

    printf("%d", soma);
}