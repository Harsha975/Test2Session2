#include<stdio.h>
int input_array_size()
{
    int s;
    printf("enter the size of array\n");
    scanf("%d",&s);
    return s;
}
void init_array(int n,int a[n])
{
    for(int i=0;i<=n-2;i++)
    {
        a[i]=i;
       // printf("%d",a[i]);
    }   
}
void erotosthenes_sieve(int n,int a[n])
{
    for(int i=2;i*i<=n;i++)
    {
        if(a[i] != 0);
        {
            for(int j=2;j<n;j+=1)
            {
                if(a[i]*j > n)
                break;
                else
                a[a[i]*j]=0;
            }           
                 
        }   
    }

}
void output(int n,int a[n])
{
    for(int i=2;i<=n-2;i++)
    {
        if(a[i] != 0)
        printf("%d\t",a[i]);
    }
}
int main()
{
    printf("hello\n"); 
    int n;
    n=input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
}