// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int i,j,n;
    int num[20],wum[20];
    num[0]=0;num[1]=1;num[2]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            printf(" ");
        }
        wum=num;
    for(j=0;j<i+1;j++){
        printf("%d",num[j+1]);
    }
    for(j=0;j<i+1;j++){
        wum[j+2]=num[j+1]+num[j+2];
    }
    printf("\n");
    }
    return 0;
}

