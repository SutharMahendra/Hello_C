#include<stdio.h>

void minmax(int a[],int len,int *min,int *max){
    *min=*max=a[0];
    for(int i=1; i<len; i++){
        if(*min>a[i]){
            *min=a[i];
        }
        if(*max<a[i]){
            *max=a[i];
        }
    }
}

int main(){
    int a[]={22,3234,3436,834,9342,23,22,445,1,234,292929};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min, &max);
    printf("maximum=%d\n",max);
    printf("minium=%d\n",min);
    return 0;
}