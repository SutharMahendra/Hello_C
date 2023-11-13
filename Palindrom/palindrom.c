// palidrome means sequence of number is same as reverse number
#include<stdio.h>

int main(){
    int num, rem,n=0;
    printf("enter the number:");
    scanf("%d",&num);
      int q=num;
    while (q != 0)
    {
        rem = q%10;
        n=n*10+rem;
        q=q/10;
    }
    if(n==num){
        printf("number is palidrome");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
    
}
