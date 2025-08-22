#include <stdio.h> // Loop Assignment No. 14

int main(){
float sum = 0, no, mean;

for(int i=1 ; i<=10; i++) { 
  printf("Enter A value\n") ;
  scanf("%f", &no);
  sum = sum + no;
}

mean = sum / 10 ;

printf("%f is sum and %f is mean",sum, mean);
return 0;
}