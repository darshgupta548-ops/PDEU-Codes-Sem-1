#include <stdio.h>

int main(){
int num, count = 0;
printf("Enter a Number\n");
scanf("%d",&num);

for(int i=1; i<=num; i++){
    if(num%i ==0){
        count++;
    }
}

if(count==2){
    printf("%d is a Prime Number",num);
}
else{
    printf("%d is not a prime number",num);
}

return 0;
}