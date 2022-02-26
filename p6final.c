#include<stdio.h>
void input_string(char *a)
{
    printf("enter the string\n");
    scanf("%s",a);
}
int str_reverse(char *string,char substring[])
{
    
    printf("enter the substring\n");
    scanf("%s",substring);
    for(int i=0;substring[i]!='\0';i++)
    {
        for(int j=0;string[j]!='\0';j++)
        {
          if(substring[i]==string[j])
          {
              return j;
          }
             continue;
        }
       
        break;
    } 
}
void output(char *a,char *substring,int index)
{
    printf("the index of the %s in %s is %d",substring,a,index);
}
int main()
{
    char a[100];
    char substring[100];
    input_string(a);
    int index=str_reverse(a,substring);
    output(a,substring,index);
    return 0;
}
