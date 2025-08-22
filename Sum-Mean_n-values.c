#include <stdio.h> // Loop Assignment No. 15

int main(){
int n;
float sum = 0, no, mean;

printf("How Many Values You want to enter\n");
scanf("%d",&n);
for(int i=1 ; i<=n; i++) { 
  printf("Enter A value\n") ;
  scanf("%f", &no);
  sum = sum + no;
}

mean = sum / n ;

printf("%f is sum and %f is mean",sum, mean);
return 0;
}