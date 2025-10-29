#include <stdio.h>
#include <string.h>

void main(){
char name[100];
printf("Enter Your Name\n");
gets(name);

/*The Range of A-Z is 65-90 while a-z is 97-122 in ASCII values... They have a common difference of 32 so we can add/subtract 32 to get a toggle case*/

for(int i=0; name[i] != '\0'; i++){
    if(name[i]>='A' && name[i] <= 'Z'){
        name[i] = name[i] + 32; // Upper Case to lower case
    }
    else if(name[i]>='a' && name[i] <= 'z'){
        name[i] = name[i] - 32; // Lower case to upper case
    }
}
// Same loop can be run for converting to Uppercase / Lowercase

printf("%s",name);

}