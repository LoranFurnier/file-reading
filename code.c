#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[]){
    FILE *file;
    char *fname = argv[1];
    char str[255];
    while(fopen(argv[1],"r") == NULL){
        file = fopen(argv[1], "r");
        printf("This program needs file, please, provide it with an argument of command line");
        return 0;
    }
    fclose(file);
}
