#include<stdio.h>
int main(){
    int Ram;
    printf("Enter age of Ram :");
    scanf("%d",&Ram);
    int Shyam;
    printf("Enter age of Shyam :");
    scanf("%d",&Shyam);
    int Ajay;
    printf("Enter age of Ajay :");
    scanf("%d",&Ajay);
    if(Ram>Shyam && Ram>Ajay){
        printf("Ram is greater than Shyam and Ajay %d",Ram);
    }
    if(Shyam>Ram && Shyam>Ajay){
        printf("Shyam is greater than Ram and Ajay %d",Shyam);
    }
    if(Ajay>Ram && Ajay>Shyam){
        printf("Ajay is greater than Ram and Shyam %d",Ajay);
    }
    return 0;
}