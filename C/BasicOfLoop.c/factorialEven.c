#include<stdio.h>
int main(){
   int n=5;
   printf("Enter a product :");
   scanf("%d",&n);
   int fact=1;
   for(int i=1;i<=5;i++){
     
      fact*=i;
   }
   printf("The factorial is %d",fact);
   return 0;
}
     
 