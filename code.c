#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   char *str;
   int numi, bytes;
   float numf;
   char *path;
   int k = 0;
   bytes = 0;
   FILE* f1 = fopen(argv[1], "rb");
   while(f1==NULL){
     printf("Be a good comrade and show the KGB your file: ");
     scanf("%s", &path);
     f1 = fopen(&path, "r");
   }
   printf("\nSo what we've got here...\n");
    // определяем размер файла
  fseek(f1 , 0 , SEEK_END);                          // устанавливаем позицию в конец файла
  long lSize = ftell(f1);                            // получаем размер в байтах
  rewind (f1);

  char *s = (char*) malloc(sizeof(char) * lSize); // выделить память для хранения содержимого файла
  if (s == NULL)
  {
      fputs("ERROR OCCURED, NKVD WILL BE HERE SOON!", stderr);
      exit(2);
  }
  while (!feof(f1))
   {
      fscanf(f1, "%i %s %f \n", &numi, &str, &numf);
      printf("%i %s %f \n", numi, &str, numf);
      k++;
   }
  printf("Comrade Colonel, there'd found %d strings and %d bytes of information! Shoot? \n", k, lSize);/*Written 100 records, total 26400 bytes*/
  fclose (f1);
   return 0;
   /*system("pause");*/
}
