#include <stdio.h>

int main() {
  int a[5],i,j, b[10] = {0} ;
  printf("Enter 5 Numbers\n");
  
  for(i=0; i<=4; i++){
      scanf("%d",&a[i]);
  }

  for(j=0,i=0 ; i<=5; i++,j=j+2){
    b[j] = a[i];
  }

  for(j=0; j<10; j++){
      printf("%d  ",b[j]);
  }
 
    return 0;
}