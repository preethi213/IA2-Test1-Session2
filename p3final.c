#include<stdio.h>
int input_number()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;
}
int is_composite(int n)
{
  int i,a,c=0;
   printf("enter the number a\n");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    c=c+1;
  }
  if(c==2)
  printf("the number is prime\n");
  else
  printf("the number is composite\n");
  return 0;
}
void output(int n,int composite);

int main()
{
  int n=input_number();
  int res=is_composite(n);
  

  return 0;
}