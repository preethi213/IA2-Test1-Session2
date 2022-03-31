#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side of triangle:\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
  return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene)
  {
    printf("the triangle with side %d,%d and %d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d and %d is not scalene\n",a,b,c);
  }
}
int main()
{
  int x =input_side();
  int  y =input_side();
  int z =input_side();
  int res=check_scalene(x,y,z);
  output( x,y,z,res);
  return 0;
}