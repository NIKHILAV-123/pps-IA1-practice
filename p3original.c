#include<stdio.h>
void input_two_numbers(int *a,int *b)
{
  printf("enter two numbers\n");
  scanf("%d %d",a,b);

}
void add (int a, int b, int *sum)
{
  *sum = a+b;
  
}
void output(int a,int b,int sum)
{
  printf("sum of %d + %d is %d\n",a,b,sum);

}
int main()
{
  int x,y,sum;
  input(&x,&y);
  add(x,y,&sum);
  output(x,y,sum);
  return 0;

}