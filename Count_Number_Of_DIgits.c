#include <stdio.h>

int main(){
int count = 0, num;

printf("Enter a Number \n");
scanf("%d",&num);
printf("%d has ",num);

for(;num>0;num=num/10){
    count++;
}

printf("%d digits", count);

}