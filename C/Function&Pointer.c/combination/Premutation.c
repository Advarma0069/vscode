#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);

    int nfact=1;
    int rfact=1;
    int nrfact=1;

    for(int i=3;i<=n;i++){
        nfact = rfact*i;
    }
    for(int i=2;i<=r;i++){
        nrfact=rfact*i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact != nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}