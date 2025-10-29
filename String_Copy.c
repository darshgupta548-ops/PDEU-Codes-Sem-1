#include <stdio.h>
#include <string.h>

void main(){
char name[100], cname[100];
printf("Enter Your Name\n");
gets(name);
strcpy(cname,name);
printf("Your Name is %s\n",name);
printf("%s is A Cool Guy\n",cname);
}