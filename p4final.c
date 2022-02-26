#include<stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int i=0;
  int t1=0,t2=1,t3=0;
  for(i=0;i<=n;i++)
    {
      t1=t2;
      t2=t3;
      t3=t1+t2;
    }
  return t2;
}
void output(int n,int fibo)
{
  printf("the fibonacii series of %dth term is %d",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}
