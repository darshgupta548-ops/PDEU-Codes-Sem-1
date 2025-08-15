#include <stdio.h> // Assignment No. 13

int main(){

float bytes, MB, KB, GB;

printf("Enter bytes \n");
scanf("%f", &bytes);

KB = bytes/1024 ;
MB = KB/1024;
GB = MB/1024;

printf("%f bytes equal to %f kB, %f MB, %f GB\n", bytes, KB, MB, GB);
return 0;
}