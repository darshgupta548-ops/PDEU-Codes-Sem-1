#include <stdio.h>

int main(){
int num, digit, sum = 0;

printf("\n3 digit Armstrong Numbers Are Numbers whose sum of cube of digits is the number itself\nEnter A 3 digit Number to check it it is Armstrong Number\n");

//153, 370, 371, 1634, and 9474 are some armstrong numbers

scanf("%d",&num);

for(int tnum = num; tnum > 0; tnum = tnum/10){

    digit = tnum%10;
    sum = sum + (digit*digit*digit);

}

if(sum == num){
    printf("It is an Armstrong Number\n");
}
else{
    printf("It is not an Armstrong Number\n");
}

return 0;
}