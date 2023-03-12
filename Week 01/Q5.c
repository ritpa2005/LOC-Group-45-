//Program to input radius of circle and print its diameter,
//circumference and area

#include <stdio.h>

void main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("Diameter of the circle is %d\n",2*r);
    printf("Circumference of the circle is %.3f\n",2*3.14159*r);
    printf("Area of the circle is %.3f\n",3.14159*r*r);
}