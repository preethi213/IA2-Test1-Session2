#include<stdio.h>
int input_array_size()
{
  int length;
  printf("enter the length of array:\n");
  scanf("%d",&length);
  return length;
}
void input_array(int n,int a[n])
{
  printf("enter all values of the array:\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 1;
  }
  return 0;
}
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
   if (is_composite(a[i]))
   {
     sum+=a[i];
   }
  }
  return sum;
}
void output(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int l=input_array_size();
  int data[l];
  input_array(l,data);
  int res=sum_composite_numbers(l,data);
  output(res);
  return 0;
}