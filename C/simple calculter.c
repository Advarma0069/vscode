#include<stdio.h>
void main()
{
    clrscr();
    int a,b,c;
    char(choice);
    printf("Enter a num to perform the operation");
    scanf("%f,%f",&a,&b);
    printf("\nEnter your operation option\nA for add\nB for sub\nC for mul\nD for div ");
    scanf("%c",&choice);
    switch (choice)
    caseA:

    c = a+b;
    printf("\nsum=%f",c);
    // break;

    caseB:
    c = a-b;
    printf("\nsub=%f",c);
    // break;
    caseC:
    c = a*b;
    printf("\nmul=%f",c);
  // break;
    caseD:
    if (b==0)
    printf("\ndiv is not possible");
    else
    c = a/b;
    printf("\ndiv = %f",c);
   // break;
   // default:
    //printf("\nwrong choice");
    
    return 0;

}