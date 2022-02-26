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
typedef struct _polygon
{
    int n;
    line l[100];
    float perimeter;
}polygon;
int input_n()
{
    int a;
    printf("enter the no of sides of the polygon\n");
    scanf("%d",&a);
    if(a>=3)
    return a;
    else
    return 0;
}
point input_point()
{
    point p;
    printf("enter the points of the polygon\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
line input_line()
{
    line l;
    l.p1=input_point();
    l.p2=input_point();
    l.distance=sqrt((pow((l.p2.x)-(l.p1.x),2))+(pow((l.p2.y)-(l.p1.y),2)));
    return l;
}
void find_perimeter(polygon *p)
{
    p->perimeter=0;
    p->n=input_n();
    if(p->n>=3)
    {
        for(int i=0;i<p->n;i++)
        {
            p->l[i]=input_line();
        }
        for(int j=0;j<p->n;j++)
        {
            p->perimeter = p->perimeter + p->l[j].distance;
        }
    }
}
void output(polygon p)
{
    if(p.n>=3)
    printf("the perimeter of the polygon is %0.2f",p.perimeter);
    else
    printf("the given points doesnot form any polygon  ->   :)     <-");
}
int main()
{
    polygon p;
    find_perimeter(&p);
    output(p);
    return 0;
}

