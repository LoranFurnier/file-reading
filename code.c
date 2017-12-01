#include <stdio.h>
int main() {
    FILE *fp;
    char *name;
    scanf("%s", name);
    if((fp = fopen(name, "r"))!=NULL) { // открыть файл удалось?
        while (fgetc(fp)!='\n'){
            fgetc(fp);
        }
    } else printf("Не удалось открыть файл");
    fclose(fp);
    return 0;
}
