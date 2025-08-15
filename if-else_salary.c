#include <stdio.h>// If-Else Assignment No. 3

int main() {
    float gross_s, net_s, allow, ded;
    printf("Enter Gross Salary\n");
    scanf("%f", &gross_s);
    if (gross_s > 10000) {
        allow = 0.1 * gross_s;
        ded = 0.03 * gross_s;
        net_s = gross_s + allow - ded;
        printf("The Net Salary is %f", net_s);
    }
    else if (gross_s > 5000 && gross_s < 10000) {
        allow = 0.07 * gross_s;
        ded = 0.02 * gross_s;
        net_s = gross_s + allow - ded;
        printf("The Net Salary is %f", net_s);
    }
    else {
        net_s = gross_s;
        printf("The Net Salary is %f", net_s);
    }
    return 0;
}