#include<stdio.h>
#include<stdlib.h>

//returning a pointer to a structure from function
struct part5
{
    /* data */
    int x;
    int y;
    
};

struct part5* fun(int a, int b){

    struct part5 *ptr = (struct part5*)malloc(sizeof(struct part5));
    
    ptr->x=a;
    ptr->y= b+5;

    return ptr;
}

void display(struct part5 *value){
   printf("%d %d %d", value->x, value->y);
}

int main(){
    struct part5 *ptr1, *ptr2;

    ptr1 = fun(3, 5);
    ptr2 = fun(2,4);
   
    display(ptr1);
    display(ptr2);

    return 0;  
    
}
