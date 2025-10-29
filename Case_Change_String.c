#include <stdio.h>
#include <string.h>

void main(){
char name[100];
printf("Enter Your Name\n");
gets(name);
printf("%s is in UPPERCASE and %s is in lowercase\n",strupr(name),strlwr(name));
}