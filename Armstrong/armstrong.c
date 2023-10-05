// armstrong means number jetala akada dharave ena ee darek akhda na ni dhat thai jay ane eno sum ee number barbar thay
#include<stdio.h>
#include<limits.h>

int main(){
    int q, num, rem, qube,sum=0;
    printf("enter the number:");
    scanf("%d",&num);

    q=num;
    while(q != 0){
        rem=q%10;
        qube=rem*rem*rem;
        sum=sum+qube;
        q=q/10;
        
    } 
    if (sum==num)
    {
       
        printf("Armstrong ");
    }else{
        printf("not Armstorng");
    }
    return 0;
    
}
