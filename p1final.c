#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the number:\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float b,h;
  input(&b,&h);
  float area;
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}