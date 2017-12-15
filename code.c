#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   char *str;
   struct p{
       int numi;
       char *str2;
       float numf;
   }p;
   int i;
   int numi;
   char c;
   char *str2;
   float numf;
   char *path;
   size_t result;
   int k = 0;
   FILE* f1 = fopen(argv[1], "rb");
   path="0";
   while(f1==NULL){
     if (path!="0"){
        printf("You're not a good comrade, i see... '%s' isn't file we look for\n", &path);
     }
     printf("Be a good comrade and show the KGB your file: ");
     scanf("%s", &path);
     f1 = fopen(&path, "rb");
   }

   fseek(f1, 0 , SEEK_END);
   long lSize = ftell(f1);
   rewind (f1);

   str = (char*) malloc(sizeof(char) * lSize);
  if (str == NULL)
  {
      printf("– COMRADE COLONEL, THERE'S SOMETHING WRONG! SHOOT?\n– Exactly.");
      exit(2);
  }

    while((c=getc(f1))!= EOF)
    {
    printf("%c", c);
    }
  printf("Comrade Colonel, there'd been found %d strings and %d bytes of information! Shoot? \n", k, lSize);/*Written 100 records, total 26400 bytes*/
  fclose (f1);
   return 0;
}
