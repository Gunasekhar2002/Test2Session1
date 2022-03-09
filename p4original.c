#include<stdio.h>
int input()
{
  int n;
  printf("enter the nth value for fibonacci series:");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a,b,fibo;
  a=0;
  b=1;
  fibo=a+b;
  
}
void output(int n,int fibo)
{
  int a,b,i;
  a=0;
  b=1;
  printf("the fibonacci sequence of %d %d", %d,",n,fibo);
  
   
  
}
int main()

{
  int n,fibov;
  n=input();
  fibov=find_fibo(n);
  output(n,fibov);
  return 0;
}