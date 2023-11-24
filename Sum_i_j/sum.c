#include<stdio.h>
// sum of i and j //
int main(){
    int arr[5][5]={
    {1,2,3,4,5},
    {2,4,3,4,5},
    {2,3,4,5,3},
    {3,5,6,7,8},
    {5,6,7,8,9}
    };
    int sum=0;
    printf("Sum of row");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            sum+=arr[i][j];
        }
        printf("sum row:%d",sum);
        sum=0;
    }

    printf("sum of column");
    int i;

    for (int j = 0; j < 5; j++){
        for (i = 0; i < 5; i++);
        {
            sum+=arr[i][j];
        }
        printf("sum column: %d", sum);
        sum=0;
        
    }
    
   return 0; 
}