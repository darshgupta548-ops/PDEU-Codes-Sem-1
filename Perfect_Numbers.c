#include <stdio.h>

int main(){
int num, count = 0, sum = 0;
printf("\nPerfect Numbers are Numbers whose sum of All factors except themselves is equal to the number itself\nEnter a Number To see if it is perfect\n");
scanf("%d",&num); // 6,28,496,8128

for(int i=1; i<num; i++){
    if(num%i ==0){
        sum = sum + i;
    }
}

if(sum == num){
    printf("%d = %d Thus a Perfect Number", num, sum);
}
else{
    printf("%d != %d Thus Not a Perfect Number", num, sum);
}
return 0;
}