#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the points (x1,y1),(x2,y2),(x3,y3)\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  a=sqrt((pow((x2-x1),2))*(pow((y2-y1),2)));
  b=sqrt((pow((x3-x2),2))*(pow((y3-y2),2)));
  c=sqrt((pow((x2-x1),2))*(pow((y2-y1),2)));
  float d=a+b+c/2;
  float area =sqrt(d*(d-a)*(d-b)*(d-c));
  if (area!=0)
    return 1;
  return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==1)
    printf("the given points form a triangle");
  else
    printf("not a triangle");
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  int istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}
