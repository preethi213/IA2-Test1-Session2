#include<stdio.h>
void input_string(char *a)
{
  printf("enter the string:\n");
  scanf("%s",a);
}
void str_reverse(char *str,char *rev_str)
{
  int n;
  for(n=0;str[n];n++);
  n--;
  int i;
  for(i=0;str[i];i++)
  {
    rev_str[i]=str[n];
    n--;
  }
  rev_str[i]='\0';
}
void output(char *a,char *reverse_a)
{
  printf("the reverse of %s is %s \n",a,reverse_a);
}
int main()
{
  char s[10];
  input_string(s);
  char rev_str[10];
  str_reverse(s,rev_str);
  output(s,rev_str);
  return 0;
}