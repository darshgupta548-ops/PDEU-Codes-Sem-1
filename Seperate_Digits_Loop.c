#include <stdio.h>

int main(){
int num, digit;

printf("Enter A Number\n");
scanf("%d",&num);

for (; num > 0; num = num/10){

    digit = num%10;
    printf("%d, ",digit);
    /*Here If Number is 953... 953%10 = 3, then loop re-iterates and 953 = 95 (953/10) and then 95%10 = 5 and then similarly 9 so output is 359*/
}

return 0;

}
