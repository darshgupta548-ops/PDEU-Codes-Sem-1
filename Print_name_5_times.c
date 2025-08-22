#include <stdio.h> // Loop Assignment No. 11
int main(){
char name[100];
printf("Enter name \n");
scanf("%s", &name);
for(int i=1 ; i<=5; i++) { 
   printf("%s \n", name);
}

return 0;
}