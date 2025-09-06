#include <stdio.h>

int main(){
int num, digit, reverse =0;

printf("Enter A Number\n");
scanf("%d",&num);
/* We will store the value of input in a temp. variable*/
for (int tnum = num; tnum > 0; tnum = tnum/10){

    digit = tnum%10;
    reverse = reverse*10 + digit;
}

if (num == reverse){
    printf("It is a Palindrome");
}
else{
    printf("It is Not A Palindrome");
}

return 0;
}