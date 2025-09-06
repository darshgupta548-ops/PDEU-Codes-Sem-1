#include <stdio.h>

int main(){
int num, count = 0, new_count=0, sum =0;
for(int i=0; i <=500; i++){
    count = 0;
    for(int j=1; j<=i; j++){
        if(i%j ==0){
            count++;
        }
    }
if(count==2){
    printf(" %d,",i);
    new_count++;
    sum = sum + i;
}
}
printf("\n\nThere are %d prime Numbers Between 1-500\nThe Sum of all the primes is %d", new_count, sum);

return 0;
}