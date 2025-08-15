#include <stdio.h>// If-Else Assignment No. 5

int main() {
    float gross_s, net_s, dis;
    printf("Enter Gross Sales\n");
    scanf("%f", &gross_s);

    if (gross_s > 20000) {
        dis = 0.15 * gross_s;
        net_s = gross_s - dis;
        printf("The Net Sales is %f", net_s);
    }
    else if (gross_s > 10000) {
        dis = 0.1 * gross_s;
        net_s = gross_s - dis;
        printf("The Net Sales is %f", net_s);
    }

    return 0;
}