#include <stdio.h> // Assignment No.16
int main(){
    int largest, num, smallest;
    
     printf("Enter A Number\n");
     scanf("%d", &num);
     largest = num;
     smallest = num;


    for(int i=2; i<=10; i++){
        scanf("%d", &num);
        if(num > largest){
            largest = num;
        }       
        if(num < smallest) {
            smallest = num;
        }
    }
    printf("The largest Number is %d and smallest number is %d", largest, smallest);
    return 0;

}
