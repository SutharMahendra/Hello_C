#include<stdio.h>
#define N 10

int main(){
    int n,seen[N]={0},rem;
    printf("enter the number:");
    scanf("%d", &n);

    for(int i=0; i<10; i++){
        rem=n%10;
        seen[rem]=seen[rem]+1;
        n=n/10;
    }
    if(seen[N]!=0){
        printf("yes");
    }
    else{
        printf("NO");
    }
}