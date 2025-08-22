#include <stdio.h> // Loop Assignment No. 12

int main(){
char name[100];
int n;
printf("Enter name \n");
scanf("%s", &name);
printf("ENTER NO. of times to be printed\n");
scanf("%d", &n);
for(int i=1 ; i<=n; i++) { 
   printf("%s \n", name);
}

return 0;
}