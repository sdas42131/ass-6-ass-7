// 4.	Write program, which reads x1, y1, x2 and y2 and finds distance between points (x1,y1) and (x2,y2). input 3, 7, 11, 13 output 10. 

#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2, dis;
    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter y2: ");
    scanf("%f", &y2);
    
    dis = sqrt((x2-x1)*(x2-x1) + (y2-y1)*y2-y1);
    printf("The distance bw two points is: %f", dis);

  return 0;
}
