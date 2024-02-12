#include <stdio.h>

int main(){

int length;
int width;
// int area;

printf("Enter the length of rectangle: ");
scanf("%i", &length);

printf("Enter the width of rectangle: ");
scanf("%i", &width);

// area = length*width;
int area = length*width;
printf("The area of rectangle is %i", area);

}