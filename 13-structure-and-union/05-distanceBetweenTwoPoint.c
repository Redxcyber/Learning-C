//program to enter two points and then calculate distance between them 

#include<stdio.h>
#include<math.h>
int main(){
    struct point{
        int x;
        int y;
    };

    struct point p1,p2;

    printf("Enter x-coordinate of point p1 : ");
    scanf("%d",&p1.x);
    printf("Enter y-coordinate of point p1 : ");
    scanf("%d",&p1.y);

    printf("Enter x-coordinate of point p2 : ");
    scanf("%d",&p2.x);
    printf("Enter y-coordinate of point p2 : ");
    scanf("%d",&p2.y);
    
    float distance = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));

    printf("Distance b/w (%d,%d) and (%d,%d) = %f\n",p1.x,p1.y,p2.x,p2.y,distance);

    return 0;
}