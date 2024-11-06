#include<stdio.h>
#include<math.h>
int main(){
    float base, height, area, radius, circleArea;
    
    printf("Enter base , height and radius: ");
    scanf("%f %f %f", &base, &height, &radius);

    area = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", area);

    circleArea = 3.1416 * sqrt(radius);
    printf("Area of circle = %.2f\n", circleArea);

}