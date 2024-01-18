#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[]) {
    for (int i = 0; i < args; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}