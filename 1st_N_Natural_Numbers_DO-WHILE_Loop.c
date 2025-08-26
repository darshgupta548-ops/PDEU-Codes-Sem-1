// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
  int i = 1 ,n, m, j=1;
  printf("Enter a Number\n");
  scanf("%d", &n);
  
  while( i <= n){
      printf("%d \n", i);
      i++;
  }
  
  
  printf("Enter a Number\n");
  scanf("%d", &m);
  
  
  do {
      printf("\n%d\n", j);
      j++;
  }
  while (j <= m);
    return 0;
}
