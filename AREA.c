# include<stdio.h>
# include<math.h>

float RectangleArea(float a, float b);
float CircleArea(float radius);
float SquareArea(float side);

int main () {
     float a;
     float b;
     float side;
     float radius;
     printf("Enter length of rectangle \n");
     scanf("%f", &a);
     printf("Enter Width of rectangle \n");
     scanf("%f", &b);
     printf("Area of rectangle is : %f \n", RectangleArea(a,b));
     printf("Enter the side of sqaure \n");
     scanf("%f", &side);
     printf("Area of the square is : %f \n", SquareArea(side));
     printf("Enter the radius of a circle \n");
     scanf("%f", &radius);
     printf("Area of the circle is : %f", CircleArea(radius));

     return 0;
}

float RectangleArea(float a, float b){
    return a*b;
}
float SquareArea( float side){
return side*side;
}
float CircleArea( float radius){
     return 3.14*radius*radius;
}