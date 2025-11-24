#include <stdio.h>
void main(){
int age[4] = {17,18,19,20} ;
int* age_ptr = age;

// pointer of array is corresponding to the first element of the array so we can  loop the array value using pointers

for(int i=0; i<4;i++){
    printf("%d\n", *age_ptr);
    age_ptr++;
}

                                                                                                                                                                                                 
}