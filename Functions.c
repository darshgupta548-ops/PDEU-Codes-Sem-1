#include <stdio.h>

void add(void){
    int x, y, z;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&x, &y);
    z= x+y;
    printf("The sum is %d \nNo Argument No return Function\n",z);
}

void subtract(int x, int y){
    int z;
    z= x-y;
    printf("The difference is %d \n Argument with No return Function\n",z);
}

int multiply(void){
    int x, y, z;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&x, &y);
    z= x*y;
    printf("The product is %d \nNo Argument return Function\n",z);
    return z;
}

int divide(int x, int y){
    int z;
    z= x/y;
    printf("The division is %d \n Argument with return Function\n",z);
    return z;
}

void main(){
    int x,y,a,b;
    void add(void);
        add();
    void subtract(int, int);
        printf("Enter 2 numbers\n");
        scanf("%d %d",&a, &b);
        subtract(x,y);
    int multiply(void);
        multiply();
    int divide(int, int);
        printf("Enter 2 numbers\n");
        scanf("%d %d",&x, &y);
        divide(x,y);
}