#include<stdio.h>

int fact(int num){
    int sum=0;
   if(num==1){
    return 1;
   }else{
    sum = sum + num*fact(num-1);
    
   }
   return sum;
}

int main(){
    int n, factorial;
    printf("entet the number:");
    scanf("%d",&n);

    printf("%d",fact(n));
    return 0;
}