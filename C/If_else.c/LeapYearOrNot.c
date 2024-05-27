#include<stdio.h>
int main(){
    int year;
    printf("Enter years");  // 2002 2023 1994 1999 2000 all of these years
    scanf("%d",&year);
    if(year%4==0 && year%400==0 || year%100!=0){
        printf("%d is a leap year \n",year);

    }
    else{
        printf("%d is not leap year \n",year);
    }
    return 0;
}