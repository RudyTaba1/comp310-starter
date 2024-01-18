#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(int args, char *argv[]) {
    for (int i = 0; i < args; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
=======
int main(int argc, char *argv[]) {
    for (int i=1; i < argc; i++) {
        printf("i=%d argv[%d] = %s\n", i, i, argv[i]);
    }
}

>>>>>>> b12a40f0ff7a1285f2fc4c497ae3dc1e05e6947a
