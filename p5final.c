#include<stdio.h>
int input()
{
  int num;
  printf("enter the two numbers:\n");
  scanf("%d",&num);
  return num;
}
int gcd(int a,int b)
{
 int large=a>b ? a:b;
 int small=a<b?a:b;
int i=1;
int rem=1;

while(rem)
{
  rem=large-i*small;
  if(rem<small)
  {
    large=small;
    small=rem;
    i=0;
  }
  i++;
}
return large;
}
 void output(int a,int b,int gcd)
 {
printf("the gcd of %d and %d is %d",a,b,gcd);

}

int main()
{
int num1=input();
int num2=input();
int res=gcd(num1,num2);
output(num1,num2,res);
return 0;
}