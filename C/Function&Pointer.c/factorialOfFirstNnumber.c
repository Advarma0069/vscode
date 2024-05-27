#include<stdio.h>
#include<math.h>

int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){

    printf("Enter a Number: ");
    printf("\nFactorial: %d ",fact());
    return 0;
}