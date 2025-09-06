#include <stdio.h>

int main(){

for(int i=1; i<=5; i++){
     printf("%d    %d\n",i, 6-i);
    }
printf("\n");
for(int i=1, j=5; i<=5 && j>=1 ; i++, j--){
     printf("%d    %d\n",i, j);
    }

return 0;
}