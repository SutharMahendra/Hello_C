#include<stdio.h>
#include<math.h>

int main(){
    int n, val1,val2;
    printf("Enter number");
    scanf("%d", &n);
//find square root of number//
    val1=ceil(sqrt(n));
    val2= n;
  
  //start loop to find it//
  int count=0;
  for(int i=2; i<=val1; i++){
    if(val2 % i == 0){
        count = 1;
    }
  }

  //give condition to find it//

  if((count==0 && val2 !=  1) || val2 == 2 || val2 == 3){
    printf("prime number");
  }else{
    printf("not prime number");
  }

  return 0;

}