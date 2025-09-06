#include <stdio.h>

int main(){
int num, count = 0;
printf("Enter a Number\n");
scanf("%d",&num);

for(int i=1; i<=num; i++){
    if(num%i ==0){
        printf(" %d,",i);
        count++;
    }
}
printf("\n%d has %d factors as computed above\n", num, count);
return 0;
}