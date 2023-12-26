#include<stdio.h>
//pass address of structure members
//passing structure member as argument
struct charset
{
    /* data */
    char c;
    int i;
};

void keyvalue(char* a, int* b){
    scanf("%c %d", a, b);
}

int main(){
    struct charset cs;
    keyvalue(&cs.c, &cs.i);
    printf(" %c %d", cs.c, cs.i);
    return 0;
   
}