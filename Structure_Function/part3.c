#include<stdio.h>
//when size of structure is very large then we can use pointer 
//passing pointer to structure as argument
struct part3
{
    /* data */
    int x;
    int y;
    int z;
};

void display(struct part3 *value){
   printf("%d %d %d", value ->x, value ->y , value->z);
}

int main(){
    struct part3 p1 = {12,13,14};
    struct part3 p2 = {12,34,55};
    
    display(&p1);
    display(&p2);
    return 0;  
    
}
