#include<stdio.h>
#define n 

int main(){
    int arr[n]={0,0,0,0,0,0,0,0,1,2,3,4,4,5,6,7,8,89,0,9,8,7,6,6,5,4,4,3,3,4,4,5,4,5,5,6,5,5,4};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
    return 0;
}