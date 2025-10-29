#include <stdio.h>
#include <string.h>

void main(){
char name[100];
printf("Enter Your Name\n");
gets(name);
printf("%s has %lu characters including space\n",name, strlen(name));
}