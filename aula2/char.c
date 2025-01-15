#include <stdio.h>

int main(void) {
        char c;
        
        printf("Tamanho de c(char): %lu  bytes/ %lu / bits\n", sizeof c, sizeof c *8);

        c = 10;
        c = 0xa;
        c = '\n';

        printf("Valor de c: %i\n", c);

        return 0;
}
