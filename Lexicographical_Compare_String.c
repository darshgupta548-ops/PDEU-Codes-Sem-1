#include <stdio.h>
#include <string.h>

void main(){
char s1[100], s2[100];
printf("\nWhen You Compare String lexicographically 'A' is less than 'a' because of ASCII values\nElse Dictionary Order is As Usual\n");
printf("Enter String 1\n");
gets(s1);
printf("Enter String 2\n");
gets(s2);

int result = strcmp(s1,s2);

if (result == 0){
    printf("\n%s is First String\n%s is Second String\nThey both are equal",s1,s2);
}
else if (result < 0){
    printf("\n%s is lexicgraphically less than %s",s1,s2);
}
else{
    printf("\n%s is lexicographically greater than %s",s1,s2);
}

}