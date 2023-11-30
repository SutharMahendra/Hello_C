#include<stdio.h>

int main(){
    int fact=1, n,rem,sum=0;
    printf("enter the number");
    scanf("%d", &n);

    int j=n;
    while(j!=0){
    rem=j%10;
   for(int j=rem; j>0; j--){

    fact=fact*j;
    
   }
   sum=sum+fact;
   fact=1;
   j=j/10;
   
 }

    if(n==sum){
        printf("strong number");
    }
    else{
        printf("not strong");
    }
    return 0;
}