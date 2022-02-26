#include <stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return  a;
}
int is_prime(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++)
    {
      if(n % i ==0)
      {
        c++;
      }  
    }
    return c;
}
void output(int n,int prime)
{
  if(prime==2)
    printf("the entered number %d is prime number",n);
    else
    printf("the entered number %d is not a prime number",n);
}  
int main()
{
  int n,is;
  n=input_number();
  is=is_prime(n);
  output(n,is);
  return 0;
}
