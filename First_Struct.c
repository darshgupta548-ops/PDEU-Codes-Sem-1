#include <stdio.h>

struct Register {
    char name[100];
    int RNo;
};

void main(){
    struct Register man1 ={"Darsh", 7};
    struct Register man2 ={"Ved", 5};
    
    printf("%s's Roll No. is %d\n",man1.name, man1.RNo);
    printf("%s's Roll No. is %d\n",man2.name, man2.RNo);
}