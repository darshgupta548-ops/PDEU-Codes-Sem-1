#include <stdio.h> // Assignment No. 8,9,10

int main(){

int side, length, breadth, radius, height, base;
float area_circle, area_triangle;

printf("Enter the side length of Square\n ");
scanf("%d",&side);
printf("The perimeter of square with side length %d is %d and area is %d \n", side, 4*side, side*side);

printf("Enter the length and breadth of Rectangle\n ");
scanf("%d %d",&length, &breadth);
printf("The perimeter of Rectangle with length %d and width %d is %d and area is %d \n", length, breadth, 2*(length+breadth), length*breadth);


printf("Enter the radius of circle\n ");
scanf("%d",&radius);

area_circle =  (22*(radius*radius))/7;

printf("The area of circle with radius %d is %f \n", radius,area_circle);

printf("Enter the Height and Base of Triangle\n ");
scanf("%d %d",&height, &base);

area_triangle =  0.5*(height*base);

printf("The area of Triangle with Height %d and Base %d is %f \n", height, base, area_triangle);

return 0;
}