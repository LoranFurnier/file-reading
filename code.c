#include <stdio.h>
int main(int argc, char *argv[]){
	FILE *file; 
	int bytes, num1;
	float num2;
	char *fname = argv[1];
	char string[255];
	file = fopen(fname,"rb");
	while(file == NULL)
	{
		printf("не могу открыть файл '%s'",fname);
		return 0;
	}
	/*число с плавающей точкой занимает 8 байт, целое число - 8 байт, строка - по 1 байту на символ*/
}
