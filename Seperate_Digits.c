#include <stdio.h>

int main(){
int a,b, dig1, dig2, dig3;

printf("Enter A 3 Digit Number\n");
scanf("%d",&a);

b = a%100;
dig3 = b%10;
dig2 = (b-dig3)/10;
dig1 = (a-b)/100;

printf("%d, %d, %d", dig1, dig2, dig3);

return 0;
}