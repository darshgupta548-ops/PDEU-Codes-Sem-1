#include <stdio.h>
#include <string.h>

void main(){
char name[100];
printf("Enter Your Name\n");
gets(name);
strrev(name);
for(int i=0; name[i] != '\0'; i++){
    printf("%c \n",name[i]);
}
}