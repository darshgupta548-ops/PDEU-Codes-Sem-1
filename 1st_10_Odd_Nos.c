#include <stdio.h> // Loop Assignment No. 2,5

int main(){
int n;
printf("Enter a number \n");
scanf("%d", &n);
for(int i=1 ; i<=n; i++) { 
    printf("\n%d\n",(2*i)+1);
}

return 0;
}