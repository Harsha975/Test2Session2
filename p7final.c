#include<stdio.h>
#include<math.h>
typedef struct _point
{
    float x,y;
}point;
typedef struct _line
{
    point p1,p2;
    float distance;
}line;
point input_point()
{
    point p; 
    printf("enter the points of the line\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
line input_line()
{
    line d;
    d.p1=input_point();
    d.p2=input_point();
    d.distance=sqrt(pow((d.p2.x)-(d.p1.x),2)+pow((d.p2.y)-(d.p1.y),2));
    return d;
}
void output(line d)
{
    printf("the length of the line with points (%0.2f,%0.2f) and (%0.2f,%0.2f) is %0.2f",d.p1.x,d.p1.y,d.p2.x,d.p2.y,d.distance);
}
int main()
{
    line l;
    l=input_line();
    output(l);
    return 0;
}
