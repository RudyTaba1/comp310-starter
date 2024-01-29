#include <stdio.h>
#include <stdlib.h>

int main(){
    char* filename = "example.txt";

    FILE* fw;

    fw = fopen(filename, "w");

    if(fw != NULL){
        fprintf(fw, "Hello World!");
        fclose(fw);
    }
    else{
        printf("Error opening file!");
        exit(1);
    }

    FILE* fr;

    fr = fopen(filename, "r");

    if(fr != NULL){
        char c;
        while((c = fgetc(fr)) != EOF){
            printf("%c", c);
        }
        
        printf("\n");
        fclose(fr);
    }
    else{
        printf("Error opening file!");
        exit(1);
    }

    return 0;
}
