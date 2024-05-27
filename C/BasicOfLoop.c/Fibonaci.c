#include<stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int a=1,b=1,sum=1;
  for(int i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
    printf("fibonaci series are start:%d\n",sum);
  }
  // printf("The fibonaci number is:%d",sum);
  return 0;
}