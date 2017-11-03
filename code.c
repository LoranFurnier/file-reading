#include <stdio.h>
int main(int argc, char* argv[]){
    while(fopen(argv[1],r)== NULL){
        printf("This program needs file, please, provide it with an argument of command line");
        
    }
}
