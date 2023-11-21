#include <stdio.h>
#include<math.h>

int main() {
    int t;
    float a,b,r,h,p,q,s;
    printf("Enter : \n 1 for Circle \n 2 for square \n 3 for Rectangle \n 4 for Triangle  \n 5 for Equilateral triangle \n 6 for Rhombus \n 7 for Regular Pentagon \n 8 for Regular Hexagon \n 9 for sphere\n");
    scanf("%d",&t);
    switch(t){
        case 1:
         printf("Enter the radius of circle :");
         scanf("%f",&r);
         printf("The Area of circle is : %f",3.14*r*r);
         break;
        case 2:
          printf("Enter the side of the square :");
          scanf("%f",&a);
          printf("The Area of square is : %f",4*a);
          break;
        case 3:
           printf("Enter the length of Rectangle :");
           scanf("%f",&a);
           printf("Enter the breadth of Rectangle :");
           scanf("%f",&b);
           printf("The Area of Rectangle is : %d",a*b);
           break;
        case 4:
           printf("Enter the base of the Triangle :");
           scanf("%f",&b);
           printf("Enter the Height of the Triangle :");
           scanf("%f",&h);
           printf("The Area of Triangle is : %f",0.5*b*h);
           break;
        case 5:
            printf("Enter the side of the Equilateral triangle :");
            scanf("%f",&a);
            printf("The Area of Equilateral triangle is : %f",sqrt(3)*a*a/4);
            break;
        case 6:
           printf("Enter the first diagonal length of Rhombus:");
           scanf("%f",&p);
           printf("Enter the second diagonal length of Rhombus:");
           scanf("%f",&q);
           printf("The Area of Rhombus is : %f",0.5*p*q);
           break;
        case 7:
             printf("Enter the side of the Regular Pentagon :");
             scanf("%f",&s);
             printf("Enter the Apothem of the Regular Pentagon :");
             scanf("%f",&h);
             printf("The Area of Regular Pentagon is : %f",(5*s*h)/2);
             break;
        case 8:
            printf("Enter the side of the Regular Hexagon :");
            scanf("%f",&s);
            printf("The Area of Regular Hexagon is : %f",3*sqrt(3)*s*s/2);
            break;
        case 9:
          printf("Enter the Radius of the Sphere :");
          scanf("%f",&r);
          printf("The Area of the Sphere is : %f",4*3.14*r*r);
          break;
        default :
          printf("No input");
          break;
    }
    
    return 0;
}