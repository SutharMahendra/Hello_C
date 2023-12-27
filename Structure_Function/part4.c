#include <stdio.h>
// returning  structure variable from function is just like to return variable

struct part4
{
    /* data */
    int x;
    int y;
    int z;
};

struct part4 edit(struct part4 value)
{
    (value.x)++;
    value.y += 10;
    value.z -= 10;
}

void display(struct part4 value)
{
    printf("%d %d %d", value.x, value.y, value.z);
}

int main()
{
    struct part4 p1 = {12, 13, 14};
    struct part4 p2 = {12, 34, 55};

    p1 = edit(p1);
    p2 = edit(p2);

    display(p1);
    display(p2);

    return 0;
}
